
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDededeGordo::status::Attack_main(L2CWeaponDededeGordo *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *this_00;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  float fVar9;
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
  
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack128,false);
  uVar5 = lib::L2CValue::operator__(aLStack144,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar5 & 1) != 0) {
    FUN_7100039170(aLStack144,this);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x14);
  lib::L2CValue::L2CValue(aLStack128,&LAB_71000392c0);
  lib::L2CValue::operator_(this_00,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  fVar7 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,fVar7);
  lib::L2CValue::L2CValue(aLStack160,0x647c02d3b);
  lib::L2CValue::L2CValue(aLStack176,1.0);
  lib::L2CValue::L2CValue(aLStack192,false);
  HVar6 = lib::L2CValue::as_hash(aLStack160);
  fVar7 = (float)lib::L2CValue::as_number(aLStack128);
  fVar8 = (float)lib::L2CValue::as_number(aLStack176);
  bVar1 = lib::L2CValue::as_bool(aLStack192);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_DEDEDE_GORDO_MOTION_PART_SET_KIND_FACE);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::MotionModule__remove_motion_partial_impl(this->moduleAccessor,iVar4,false);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_DEDEDE_GORDO_STATUS_WORK_FLAG_REMOVE_FACE_MOTION);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_DEDEDE_GORDO_MOTION_PART_SET_KIND_FACE);
  lib::L2CValue::L2CValue(aLStack176,0x35ad22641);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,true);
  lib::L2CValue::L2CValue(aLStack240,false);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,false);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  HVar6 = lib::L2CValue::as_hash(aLStack176);
  fVar7 = (float)lib::L2CValue::as_number(aLStack192);
  fVar8 = (float)lib::L2CValue::as_number(aLStack208);
  bVar1 = lib::L2CValue::as_bool(aLStack224);
  bVar2 = lib::L2CValue::as_bool(aLStack240);
  fVar9 = (float)lib::L2CValue::as_number(aLStack256);
  bVar3 = lib::L2CValue::as_bool(aLStack272);
  app::lua_bind::MotionModule__add_motion_partial_impl
            (this->moduleAccessor,iVar4,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),(bool)(bVar2 & 1),fVar9,
             (bool)(bVar3 & 1),true,false);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_DEDEDE_GORDO_MOTION_PART_SET_KIND_FACE);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  fVar7 = (float)lib::L2CValue::as_number(aLStack176);
  app::lua_bind::MotionModule__set_rate_partial_impl(this->moduleAccessor,iVar4,fVar7);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,Attack_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

