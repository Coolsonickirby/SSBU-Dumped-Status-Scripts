
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::MetaknightSpecialNSpin_main(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue *pLVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  long lVar11;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack128,0x13a970224e);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar2);
  lib::L2CValue::L2CValue
            (aLStack144,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_N_SPIN_WORK_INT_BUTTON_UNABLE_COUNTER);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xe0b4623a8);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_60);
  fVar8 = (float)lib::L2CValue::as_number(aLStack112);
  fVar9 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
            (this->moduleAccessor,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack128,0xfd5a471dd);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
  fVar8 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar8);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  uVar4 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,false);
    FUN_71001ece00(aLStack112,this,aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,&DAT_71001edbc0);
  lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  FUN_71001edc20(this);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack160,0xf2d0c3c2e);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar5 = lib::L2CValue::as_integer(aLStack160);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack144,fVar8);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack176,0x11ba5b8b39);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar5 = lib::L2CValue::as_integer(aLStack176);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack160,fVar8);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  fVar8 = (float)app::lua_bind::ControlModule__get_stick_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
  uVar4 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar4 & 1) == 0) {
    fVar8 = (float)app::lua_bind::ControlModule__get_stick_x_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
    lib::L2CValue::operator_(aLStack144);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_60,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar4 & 1) == 0) goto LAB_7100071c30;
    lib::L2CValue::operator_(aLStack160);
    fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack208,fVar8);
    lib::L2CValue::operator_(aLStack192,aLStack208);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    uVar4 = lib::L2CValue::as_number(aLStack176);
    lVar11 = lib::L2CValue::as_number(aLStack224);
    uVar10 = lib::L2CValue::as_number(aLStack240);
    local_60 = uVar4 & 0xffffffff | lVar11 << 0x20;
    uStack88 = (ulong)uVar10;
    app::lua_bind::KineticModule__add_speed_impl(this->moduleAccessor,(Vector3f *)&local_60);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack176);
    pLVar7 = aLStack208;
  }
  else {
    fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack192,fVar8);
    lib::L2CValue::operator_(aLStack160,aLStack192);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    uVar4 = lib::L2CValue::as_number(aLStack176);
    lVar11 = lib::L2CValue::as_number(aLStack208);
    uVar10 = lib::L2CValue::as_number(aLStack224);
    local_60 = uVar4 & 0xffffffff | lVar11 << 0x20;
    uStack88 = (ulong)uVar10;
    app::lua_bind::KineticModule__add_speed_impl(this->moduleAccessor,(Vector3f *)&local_60);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    pLVar7 = aLStack176;
  }
  lib::L2CValue::_L2CValue(pLVar7);
  lib::L2CValue::_L2CValue(aLStack192);
LAB_7100071c30:
  lib::L2CValue::L2CValue((L2CValue *)&local_60,MetaknightSpecialNSpin_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

