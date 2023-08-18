
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPfushigisou::status::SpecialNLoop_main_loop
          (L2CFighterPfushigisou *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar3 = app::lua_bind::MotionModule__is_looped_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar4 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PFUSHIGISOU_STATUS_SPECIAL_N_INT_LOOP);
    iVar5 = lib::L2CValue::as_integer(aLStack80);
    iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack96,iVar5);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,1);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::operator_(aLStack96,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack144,0xed375ec7f);
    uVar7 = lib::L2CValue::as_integer(aLStack128);
    uVar8 = lib::L2CValue::as_integer(aLStack144);
    iVar5 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack112,iVar5);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
LAB_7100007cdc:
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PFUSHIGISOU_STATUS_KIND_SPECIAL_N_END);
      lib::L2CValue::L2CValue(aLStack112,false);
      cVar1 = (char)&stack0xfffffffffffffff0;
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x60));
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack96);
      return;
    }
    lib::L2CValue::L2CValue(aLStack176,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack192,0xeef78d326);
    uVar7 = lib::L2CValue::as_integer(aLStack176);
    uVar8 = lib::L2CValue::as_integer(aLStack192);
    iVar5 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack160,iVar5);
    uVar7 = lib::L2CValue::operator__(aLStack160,aLStack96);
    if ((uVar7 & 1) == 0) {
      uVar7 = 0;
    }
    else {
      lib::L2CValue::L2CValue(aLStack224,CONTROL_PAD_BUTTON_SPECIAL);
      iVar5 = lib::L2CValue::as_integer(aLStack224);
      bVar3 = app::lua_bind::ControlModule__check_button_off_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack208,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar7 = lib::L2CValue::operator__(aLStack208,aLStack80);
      uVar7 = uVar7 & 0xffffffff;
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
    }
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar7 & 1) != 0) goto LAB_7100007cdc;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PFUSHIGISOU_STATUS_SPECIAL_N_INT_LOOP);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    iVar6 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar5,iVar6);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  bVar3 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar7 & 1) == 0) {
LAB_7100007e70:
    lVar2 = -0x50;
  }
  else {
    this_00 = &this->globalTable;
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar9,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
LAB_7100007e38:
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar9,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) != 0) goto LAB_7100007e70;
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar9,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) == 0) goto LAB_7100007f18;
    }
    else {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar7 = lib::L2CValue::operator__(pLVar9,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) goto LAB_7100007e38;
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack80,false);
    lib::L2CValue::L2CValue(aLStack96,0x915c5de42);
    lib::L2CValue::L2CValue(aLStack112,0xd483c0ed2);
    FUN_7100007240(this,aLStack80,aLStack96,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lVar2 = -0x40;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
LAB_7100007f18:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

