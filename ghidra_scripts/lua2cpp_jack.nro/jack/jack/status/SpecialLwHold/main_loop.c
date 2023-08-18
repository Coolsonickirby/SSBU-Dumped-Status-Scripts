
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterJack::status::SpecialLwHold_main_loop(L2CFighterJack *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,CONTROL_PAD_BUTTON_SPECIAL);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::ControlModule__check_button_off_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_JACK_STATUS_SPECIAL_LW_INT_HOLD_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack128,iVar2);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar3 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar3 & 1) != 0) goto LAB_7100020988;
    bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      this_00 = &this->globalTable;
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar3 = lib::L2CValue::operator__(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
LAB_7100020aa4:
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar3 = lib::L2CValue::operator__(pLVar4,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar3 & 1) != 0) goto LAB_7100020adc;
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar3 = lib::L2CValue::operator__(pLVar4,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar3 & 1) == 0) goto LAB_71000209c4;
      }
      else {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar3 = lib::L2CValue::operator__(pLVar4,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar3 & 1) == 0) goto LAB_7100020aa4;
        lib::L2CValue::_L2CValue(aLStack96);
      }
      lib::L2CValue::L2CValue(aLStack80,false);
      lib::L2CValue::L2CValue(aLStack96,0xf250902eb);
      lib::L2CValue::L2CValue(aLStack112,0x132e908f3f);
      lib::L2CValue::L2CValue(aLStack128,&DAT_7100007e70);
      FUN_7100007400(this,aLStack80,aLStack96,aLStack112,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      goto LAB_71000209b4;
    }
LAB_7100020adc:
    pLVar4 = aLStack96;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
LAB_7100020988:
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_KIND_SPECIAL_LW_END);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
LAB_71000209b4:
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar4 = aLStack80;
  }
  lib::L2CValue::_L2CValue(pLVar4);
LAB_71000209c4:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

