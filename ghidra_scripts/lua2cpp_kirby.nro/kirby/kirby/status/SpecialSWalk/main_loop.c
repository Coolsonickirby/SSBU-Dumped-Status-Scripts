
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SpecialSWalk_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  float fVar9;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_7100227ca0:
    lib::L2CValue::L2CValue(aLStack96,CONTROL_PAD_BUTTON_SPECIAL);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    bVar3 = app::lua_bind::ControlModule__check_button_off_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    cVar1 = (char)&stack0xfffffffffffffff0;
    if ((bVar4 & 1U) == 0) {
      this_00 = &this->globalTable;
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_S_FALL);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
        lib::L2CValue::_L2CValue(aLStack96);
        lVar2 = -0x40;
        goto LAB_7100227db4;
      }
      FUN_7100228130(aLStack80,this);
      lib::L2CValue::_L2CValue(aLStack80);
      FUN_7100228440(aLStack96,this);
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
      fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack144,fVar9);
      lib::L2CValue::operator_(pLVar7,aLStack144);
      lib::L2CValue::L2CValue(aLStack176,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack192,0xcee0a3848);
      uVar6 = lib::L2CValue::as_integer(aLStack176);
      uVar8 = lib::L2CValue::as_integer(aLStack192);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack160,fVar9);
      uVar6 = lib::L2CValue::operator__(aLStack112,aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar6 & 1) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
        fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack144,fVar9);
        lib::L2CValue::operator_(pLVar7,aLStack144);
        lib::L2CValue::L2CValue(aLStack176,0x6e5ec7051);
        lib::L2CValue::L2CValue(aLStack192,0xcf44ba9e5);
        uVar6 = lib::L2CValue::as_integer(aLStack176);
        uVar8 = lib::L2CValue::as_integer(aLStack192);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar6,uVar8);
        lib::L2CValue::L2CValue(aLStack160,fVar9);
        uVar6 = lib::L2CValue::operator__(aLStack112,aLStack160);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar6 & 1) == 0) goto LAB_7100227db8;
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_S_WAIT);
        lib::L2CValue::L2CValue(aLStack144,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x70);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_S_TURN);
        lib::L2CValue::L2CValue(aLStack144,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x70);
      }
      lib::L2CValue::_L2CValue(aLStack144);
      pLVar7 = aLStack112;
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_S_ATTACK);
      lib::L2CValue::L2CValue(aLStack96,true);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar7 = aLStack80;
    }
    lib::L2CValue::_L2CValue(pLVar7);
    iVar5 = 1;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lVar2 = -0x50;
LAB_7100227db4:
      lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar6 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) goto LAB_7100227ca0;
    }
LAB_7100227db8:
    iVar5 = 0;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}

