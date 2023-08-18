
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPacmanBigpacman::status::Start_main(L2CWeaponPacmanBigpacman *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  Hash40 HVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  long lVar13;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  ulong local_80;
  ulong uStack120;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0x59f79558f);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,1.0);
  lib::L2CValue::L2CValue(aLStack176,false);
  HVar7 = lib::L2CValue::as_hash((L2CValue *)&local_80);
  fVar9 = (float)lib::L2CValue::as_number(aLStack144);
  fVar10 = (float)lib::L2CValue::as_number(aLStack160);
  bVar1 = lib::L2CValue::as_bool(aLStack176);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar7,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_80,_WEAPON_PACMAN_BIGPACMAN_MOTION_PART_SET_KIND_MATERIAL);
  lib::L2CValue::L2CValue(aLStack144,0x59ec55c97);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,true);
  lib::L2CValue::L2CValue(aLStack208,false);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,false);
  lib::L2CValue::L2CValue(aLStack256,false);
  lib::L2CValue::L2CValue(aLStack272,true);
  iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  HVar7 = lib::L2CValue::as_hash(aLStack144);
  fVar9 = (float)lib::L2CValue::as_number(aLStack160);
  fVar10 = (float)lib::L2CValue::as_number(aLStack176);
  bVar1 = lib::L2CValue::as_bool(aLStack192);
  bVar2 = lib::L2CValue::as_bool(aLStack208);
  fVar11 = (float)lib::L2CValue::as_number(aLStack224);
  bVar3 = lib::L2CValue::as_bool(aLStack240);
  bVar4 = lib::L2CValue::as_bool(aLStack256);
  bVar5 = lib::L2CValue::as_bool(aLStack272);
  app::lua_bind::MotionModule__add_motion_partial_impl
            (this->moduleAccessor,iVar6,HVar7,fVar9,fVar10,(bool)(bVar1 & 1),(bool)(bVar2 & 1),
             fVar11,(bool)(bVar3 & 1),(bool)(bVar4 & 1),(bool)(bVar5 & 1));
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,fVar9);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,-1.0);
  uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,180.0);
    uVar8 = lib::L2CValue::as_number(aLStack144);
    lVar13 = lib::L2CValue::as_number(aLStack160);
    uVar12 = lib::L2CValue::as_number(aLStack176);
    local_80 = uVar8 & 0xffffffff | lVar13 << 0x20;
    uStack120 = (ulong)uVar12;
    app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_80,0);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
  fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
  app::lua_bind::ModelModule__set_depth_offset_impl(this->moduleAccessor,fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,Start_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  return;
}

