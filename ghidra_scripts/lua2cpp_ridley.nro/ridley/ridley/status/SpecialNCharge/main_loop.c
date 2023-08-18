
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRidley::status::SpecialNCharge_main_loop(L2CFighterRidley *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *this_00;
  Hash40 HVar8;
  float fVar9;
  long lVar10;
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack96,0xe06860a20);
  lib::L2CValue::L2CValue(aLStack112,0x1244d4ffef);
  lib::L2CValue::L2CValue(aLStack128,true);
  lib::L2CValue::L2CValue(aLStack144,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  FUN_71000230f0(this,aLStack96,aLStack112,aLStack128,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_TYPE_AIR_STOP);
  lib::L2CValue::L2CValue(aLStack192,false);
  FUN_71000234e0(this,aLStack160,aLStack176,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack224,0xd9611d1a7);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar7 = lib::L2CValue::as_integer(aLStack224);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack208,fVar9);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack240,0xdd65ea9d1);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar7 = lib::L2CValue::as_integer(aLStack240);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack224,fVar9);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,3);
  uVar3 = lib::L2CValue::as_integer(this_00);
  uVar3 = app::sv_battle_object::kind(uVar3);
  lib::L2CValue::L2CValue(aLStack240,uVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,FIGHTER_KIND_KIRBY);
  uVar6 = lib::L2CValue::operator__(aLStack240,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack240);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack240,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack256,0x136c061ad0);
    uVar6 = lib::L2CValue::as_integer(aLStack240);
    uVar7 = lib::L2CValue::as_integer(aLStack256);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7)
    ;
    lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar9);
    lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack240,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack256,0x13cb329aa9);
    uVar6 = lib::L2CValue::as_integer(aLStack240);
    uVar7 = lib::L2CValue::as_integer(aLStack256);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7)
    ;
    lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar9);
    lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
  }
  uVar3 = app::lua_bind::MotionModule__end_frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack240,uVar3);
  lib::L2CValue::L2CValue(aLStack256,1.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  uVar6 = lib::L2CValue::operator__(aLStack240,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::operator_(aLStack224,aLStack208);
    fVar9 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack320,fVar9);
    lib::L2CValue::operator_(aLStack320,aLStack240);
    lib::L2CValue::operator_(aLStack288,aLStack304);
    lib::L2CValue::operator_(aLStack208,aLStack272);
    lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_RIDLEY_STATUS_SPECIAL_N_WORK_FLOAT_WEAK_SIZE);
    fVar9 = (float)lib::L2CValue::as_number(aLStack272);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack272);
  }
  lib::L2CValue::L2CValue(aLStack272,0x10f198450e);
  HVar8 = lib::L2CValue::as_hash(aLStack272);
  uVar6 = lib::L2CValue::as_number(aLStack256);
  lVar10 = lib::L2CValue::as_number(aLStack256);
  uVar3 = lib::L2CValue::as_number(aLStack256);
  local_50 = uVar6 & 0xffffffff | lVar10 << 0x20;
  uStack72 = (ulong)uVar3;
  app::lua_bind::ModelModule__set_joint_scale_impl(this->moduleAccessor,HVar8,(Vector3f *)&local_50)
  ;
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack272,CONTROL_PAD_BUTTON_SPECIAL);
  iVar4 = lib::L2CValue::as_integer(aLStack272);
  bVar1 = app::lua_bind::ControlModule__check_button_off_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
  if ((bVar2 & 1U) == 0) {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack288,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack272);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100024ffc;
    }
  }
  else {
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack272);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack288,0x1008b0a33d);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar7 = lib::L2CValue::as_integer(aLStack288);
  iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack272,iVar4);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_RIDLEY_STATUS_SPECIAL_N_WORK_INT_CHARGE_COUNT);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack288,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack320,0xcbbf934cf);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar7 = lib::L2CValue::as_integer(aLStack320);
  iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack304,iVar4);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,1);
  lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::operator_(aLStack288,aLStack272);
  lib::L2CValue::operator_(aLStack352,aLStack368);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,1);
  lib::L2CValue::operator_(aLStack336,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_RIDLEY_STATUS_SPECIAL_N_WORK_INT_FIRE_NUM);
  iVar4 = lib::L2CValue::as_integer(aLStack320);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_N_SHOOT);
  lib::L2CValue::L2CValue(aLStack336,false);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
LAB_7100024ffc:
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  return;
}

