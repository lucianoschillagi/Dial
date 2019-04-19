/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


MainComponent::MainComponent()
{
	// Dial 1
	dial1.setSliderStyle(Slider::SliderStyle::Rotary);
	dial1.setTextBoxStyle(Slider::TextBoxBelow, false, 50, 20);
	addAndMakeVisible(dial1);
	
	// Dial 2
	dial2.setSliderStyle(Slider::SliderStyle::Rotary);
	dial2.setTextBoxStyle(Slider::TextBoxBelow, false, 50, 20);
	addAndMakeVisible(dial2);
	
	// Slider 1
	slider1.setSliderStyle(Slider::SliderStyle::LinearHorizontal);
	slider1.setTextBoxStyle(Slider::TextBoxBelow, false, 50, 20);
	addAndMakeVisible(slider1);
	
		// Main Component Size
	setSize (600, 400);
}

MainComponent::~MainComponent()
{
}


void MainComponent::paint (Graphics& g)
{
	g.fillAll(Colours::aquamarine);
	
}

void MainComponent::resized()
{
	
	const int border = 10;
	
	// Creando dos rectángulos para ubicar los diales
	Rectangle<int> area = getLocalBounds();
	Rectangle<int> dialArea = area.removeFromTop(area.getHeight() / 2);
	
	dial1.setBounds(dialArea.removeFromLeft(area.getWidth() / 2).reduced(border));
	dial2.setBounds(dialArea.removeFromRight(area.getWidth() / 2));
	
	slider1.setBounds(area);
	 
	
}
