The OnGoBackClicked function is an event handler that responds when the "Go Back" button is clicked on your MessagePage. Here’s what happens step by step:
1.	The function is triggered by the button’s Clicked event, as defined in your XAML.
2.	It receives two parameters: sender (the button that was clicked) and e (event data).
3.	Inside the function, it calls Navigation.PopAsync(). This method tells the .NET MAUI navigation stack to remove (pop) the current page (MessagePage) from the navigation stack and return to the previous page.
Gotcha:
Navigation.PopAsync() is asynchronous, but here it’s called without await. This is fine if you don’t need to perform any actions after the navigation completes, but if you do, consider making the handler async and using await Navigation.PopAsync();.
Summary:
This function simply navigates back to the previous page when the user clicks the "Go Back" button
