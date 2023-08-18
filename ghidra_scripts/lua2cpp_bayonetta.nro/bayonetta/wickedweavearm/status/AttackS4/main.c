
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponBayonettaWickedweavearm::status::AttackS4_main
          (L2CWeaponBayonettaWickedweavearm *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  Hash40 HVar8;
  ulong uVar9;
  L2CValue *this_00;
  float fVar10;
  float fVar11;
  float fVar12;
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
  
  lib::L2CValue::L2CValue(aLStack128,false);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__enable_shift_material_animation_impl
            (this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue
            (aLStack144,_WEAPON_BAYONETTA_WICKEDWEAVEARM_INSTANCE_WORK_ID_INT_MOTION_KIND);
  iVar6 = lib::L2CValue::as_integer(aLStack144);
  lVar7 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar6);
  lib::L2CValue::L2CValue(aLStack128,lVar7);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,1.0);
  lib::L2CValue::L2CValue(aLStack192,false);
  HVar8 = lib::L2CValue::as_hash(aLStack128);
  fVar10 = (float)lib::L2CValue::as_number(aLStack160);
  fVar11 = (float)lib::L2CValue::as_number(aLStack176);
  bVar1 = lib::L2CValue::as_bool(aLStack192);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar8,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack128,true);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__enable_shift_material_animation_impl
            (this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_BAYONETTA_WICKEDWEAVEARM_MOTION_PART_SET_KIND_MATERIAL)
  ;
  lib::L2CValue::L2CValue(aLStack144,0xb78983dd2);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,1.0);
  lib::L2CValue::L2CValue(aLStack192,true);
  lib::L2CValue::L2CValue(aLStack208,false);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,false);
  lib::L2CValue::L2CValue(aLStack256,false);
  lib::L2CValue::L2CValue(aLStack272,true);
  iVar6 = lib::L2CValue::as_integer(aLStack128);
  HVar8 = lib::L2CValue::as_hash(aLStack144);
  fVar10 = (float)lib::L2CValue::as_number(aLStack160);
  fVar11 = (float)lib::L2CValue::as_number(aLStack176);
  bVar1 = lib::L2CValue::as_bool(aLStack192);
  bVar2 = lib::L2CValue::as_bool(aLStack208);
  fVar12 = (float)lib::L2CValue::as_number(aLStack224);
  bVar3 = lib::L2CValue::as_bool(aLStack240);
  bVar4 = lib::L2CValue::as_bool(aLStack256);
  bVar5 = lib::L2CValue::as_bool(aLStack272);
  app::lua_bind::MotionModule__add_motion_partial_impl
            (this->moduleAccessor,iVar6,HVar8,fVar10,fVar11,(bool)(bVar1 & 1),(bool)(bVar2 & 1),
             fVar12,(bool)(bVar3 & 1),(bool)(bVar4 & 1),(bool)(bVar5 & 1));
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack128,false);
  uVar9 = lib::L2CValue::operator__(aLStack144,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar9 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack160,false);
    FUN_7100033ba0(aLStack144,this,aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack128,&DAT_7100033cf0);
  lib::L2CValue::operator_(this_00,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,AttackS4_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

