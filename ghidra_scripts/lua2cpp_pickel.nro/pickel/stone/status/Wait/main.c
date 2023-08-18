
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPickelStone::status::Wait_main(L2CWeaponPickelStone *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Hash40 HVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  ulong local_100;
  ulong uStack248;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  undefined8 local_80;
  undefined8 uStack120;
  ulong local_70;
  undefined8 uStack104;
  ulong local_60;
  undefined8 uStack88;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_100,0x50000000);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_INT_PREV);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,0x50000000);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_INT_NEXT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_INT_FRAME);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,1.0);
  fVar6 = (float)lib::L2CValue::as_number((L2CValue *)&local_100);
  app::lua_bind::PostureModule__set_owner_scale_impl(this->moduleAccessor,fVar6);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,true);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_100);
  app::lua_bind::GroundModule__set_ignore_boss_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  bVar1 = app::GroundUtility::check_ignore_geometry_move_power_stage();
  lib::L2CValue::L2CValue((L2CValue *)&local_100,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_100,true);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_100);
    app::lua_bind::GroundModule__set_is_ignore_geometry_move_power_impl
              (this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_100,0x47dee83e5);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,1.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
  HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_100);
  fVar6 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
  fVar7 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_80);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack160);
  uVar9 = app::lua_bind::PostureModule__pos_2d_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,(float)uVar9);
  lib::L2CValue::L2CValue(aLStack240,(float)((ulong)uVar9 >> 0x20));
  lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_100);
  lib::L2CValue::operator_(aLStack160,aLStack240);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue(aLStack176,false);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CValue::L2CValue(aLStack288,-1.0);
  lib::L2CValue::L2CValue(aLStack304,true);
  uVar10 = lib::L2CValue::as_number(aLStack144);
  uVar8 = lib::L2CValue::as_number(aLStack160);
  local_60 = uVar10 & 0xffffffff | (ulong)uVar8 << 0x20;
  uStack88 = 0;
  uVar10 = lib::L2CValue::as_number(aLStack272);
  uVar8 = lib::L2CValue::as_number(aLStack288);
  local_70 = uVar10 & 0xffffffff | (ulong)uVar8 << 0x20;
  uStack104 = 0;
  uVar10 = lib::L2CValue::as_number(aLStack192);
  uVar8 = lib::L2CValue::as_number(aLStack208);
  local_80 = uVar10 & 0xffffffff | (ulong)uVar8 << 0x20;
  uStack120 = 0;
  bVar1 = lib::L2CValue::as_bool(aLStack304);
  bVar1 = app::lua_bind::GroundModule__ray_check_hit_pos_impl
                    (this->moduleAccessor,(Vector2f *)&local_60,(Vector2f *)&local_70,
                     (Vector2f *)&local_80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_100,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack240,(float)local_80);
  lib::L2CValue::L2CValue(aLStack224,local_80._4_4_);
  lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_100);
  lib::L2CValue::operator_(aLStack192,aLStack240);
  lib::L2CValue::operator_(aLStack208,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,true);
  uVar10 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  if ((uVar10 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    uVar10 = lib::L2CValue::as_number(aLStack192);
    lVar11 = lib::L2CValue::as_number(aLStack208);
    uVar8 = lib::L2CValue::as_number((L2CValue *)&local_60);
    local_100 = uVar10 & 0xffffffff | lVar11 << 0x20;
    uStack248 = (ulong)uVar8;
    app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_100,Wait_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

