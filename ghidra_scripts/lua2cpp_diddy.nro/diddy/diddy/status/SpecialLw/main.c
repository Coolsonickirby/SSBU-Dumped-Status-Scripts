
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::SpecialLw_main(L2CFighterDiddy *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  FUN_710001d160();
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DIDDY_STATUS_MONKEY_FLIP_FLAG_CONTINUE_MOT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1b);
  lib::L2CValue::L2CValue(aLStack96,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack112,0x12cebfbd7f);
  uVar5 = lib::L2CValue::as_integer(aLStack96);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack80,fVar8);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar4 = aLStack96;
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1d);
    fVar8 = (float)app::lua_bind::FighterControlModuleImpl__get_param_attack_lw4_flick_y_impl
                             (this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,fVar8);
    uVar5 = lib::L2CValue::operator_(pLVar4,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) goto LAB_7100014928;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DIDDY_STATUS_SPECIAL_LW_FLAG_SMASH);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    pLVar4 = aLStack80;
  }
  lib::L2CValue::_L2CValue(pLVar4);
LAB_7100014928:
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DIDDY_STATUS_SPECIAL_LW_FLAG_PUTOUT_CONDITION_OK);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0xfe64615db);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DIDDY_STATUS_SPECIAL_LW_WORK_INT_MOTION_GROUND);
    lVar7 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar7,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x13eddf980f);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DIDDY_STATUS_SPECIAL_LW_WORK_INT_MOTION_AIR);
    lVar7 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar7,iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0xab6928cf2);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DIDDY_STATUS_SPECIAL_LW_WORK_INT_MOTION_GROUND);
    lVar7 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar7,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0xe46c0e666);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DIDDY_STATUS_SPECIAL_LW_WORK_INT_MOTION_AIR);
    lVar7 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar7,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  FUN_710001db10(this);
  lib::L2CValue::L2CValue(aLStack80,SpecialLw_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

