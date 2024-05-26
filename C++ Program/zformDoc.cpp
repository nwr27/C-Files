function onFormSubmit(e)
{
    var formResponse = e.response;
    var itemResponses = formResponse.getItemResponses();
    var uploadedImageUrl = itemResponses[0].getResponse(); // Assuming the image upload question is the first question in the form

    // Get the destination Google Sheets spreadsheet and sheet
    var sheet = SpreadsheetApp.openById('YOUR_SPREADSHEET_ID').getActiveSheet();

    // Insert the image URL into the spreadsheet
    sheet.appendRow([uploadedImageUrl]);

    // Get the destination Google Doc
    var doc = DocumentApp.openById('YOUR_DOC_ID');
    var body = doc.getBody();

    // Insert the image into the Google Doc
    var blob = UrlFetchApp.fetch(uploadedImageUrl).getBlob();
    var image = body.appendImage(blob);
}
