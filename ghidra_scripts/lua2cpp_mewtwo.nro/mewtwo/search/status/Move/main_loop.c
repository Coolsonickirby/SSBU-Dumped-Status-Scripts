
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMewtwoSearch::status::Move_main_loop(L2CWeaponMewtwoSearch *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  Hash40 HVar6;
  float fVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  ulong local_120;
  ulong uStack280;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
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
  ulong uStack88;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_WEAPON_MEWTWO_SEARCH_INSTANCE_WORK_ID_INT_EFFECT_INTERVAL);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_120,0);
  uVar4 = lib::L2CValue::operator__((L2CValue *)&local_60,(L2CValue *)&local_120);
  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack160);
    uVar9 = app::lua_bind::PostureModule__pos_2d_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_120,(float)uVar9);
    lib::L2CValue::L2CValue(aLStack272,(float)((ulong)uVar9 >> 0x20));
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_120);
    lib::L2CValue::operator_(aLStack160,aLStack272);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    lib::L2CValue::L2CValue((L2CValue *)&local_120,0xcec209811);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xcb0b20640);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_120);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack176,fVar7);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    lib::L2CValue::L2CValue((L2CValue *)&local_120,0xcec209811);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xce8c55222);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_120);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack192,fVar7);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    lib::L2CValue::L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack240);
    lib::L2CValue::operator_(aLStack160,aLStack192);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::L2CValue(aLStack336,_FLAG_UPPER);
    lib::L2CValue::L2CValue(aLStack352,false);
    uVar4 = lib::L2CValue::as_number(aLStack144);
    uVar8 = lib::L2CValue::as_number(aLStack304);
    local_60 = uVar4 & 0xffffffff | (ulong)uVar8 << 0x20;
    uStack88 = 0;
    uVar4 = lib::L2CValue::as_number(aLStack320);
    uVar8 = lib::L2CValue::as_number(aLStack176);
    local_70 = uVar4 & 0xffffffff | (ulong)uVar8 << 0x20;
    uStack104 = 0;
    uVar4 = lib::L2CValue::as_number(aLStack144);
    uVar8 = lib::L2CValue::as_number(aLStack160);
    local_80 = uVar4 & 0xffffffff | (ulong)uVar8 << 0x20;
    uStack120 = 0;
    uVar8 = lib::L2CValue::as_integer(aLStack336);
    bVar1 = lib::L2CValue::as_bool(aLStack352);
    bVar1 = app::lua_bind::GroundModule__ray_check_hit_pos_target_impl
                      (this->moduleAccessor,(Vector2f *)&local_60,(Vector2f *)&local_70,
                       (Vector2f *)&local_80,uVar8,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_120,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack272,(float)local_80);
    lib::L2CValue::L2CValue(aLStack256,local_80._4_4_);
    lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_120);
    lib::L2CValue::operator_(aLStack224,aLStack272);
    lib::L2CValue::operator_(aLStack240,aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_120,-1.0);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_60,(L2CValue *)&local_120);
    lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_120,180.0);
      lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_120);
      lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_120,true);
    uVar4 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_120);
    lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0x17a3d0abd0);
      fVar7 = (float)app::lua_bind::GroundModule__get_z_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar7);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack352,180.0);
      HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_70);
      uVar4 = lib::L2CValue::as_number(aLStack224);
      lVar10 = lib::L2CValue::as_number(aLStack240);
      uVar8 = lib::L2CValue::as_number((L2CValue *)&local_80);
      local_120 = uVar4 & 0xffffffff | lVar10 << 0x20;
      uStack280 = (ulong)uVar8;
      uVar4 = lib::L2CValue::as_number(aLStack336);
      lVar10 = lib::L2CValue::as_number(aLStack304);
      uVar8 = lib::L2CValue::as_number(aLStack352);
      local_60 = uVar4 & 0xffffffff | lVar10 << 0x20;
      uStack88 = (ulong)uVar8;
      uVar8 = app::lua_bind::EffectModule__req_impl
                        (this->moduleAccessor,HVar6,(Vector3f *)&local_120,(Vector3f *)&local_60,1.0
                         ,0,-1,false,0);
      lib::L2CValue::L2CValue(aLStack320,uVar8);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    }
    lib::L2CValue::operator_(aLStack160,aLStack192);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CValue::operator_(aLStack176);
    lib::L2CValue::L2CValue(aLStack384,_FLAG_UNDER);
    lib::L2CValue::L2CValue(aLStack400,true);
    uVar4 = lib::L2CValue::as_number(aLStack144);
    uVar8 = lib::L2CValue::as_number(aLStack336);
    local_60 = uVar4 & 0xffffffff | (ulong)uVar8 << 0x20;
    uStack88 = 0;
    uVar4 = lib::L2CValue::as_number(aLStack352);
    uVar8 = lib::L2CValue::as_number(aLStack368);
    local_70 = uVar4 & 0xffffffff | (ulong)uVar8 << 0x20;
    uStack104 = 0;
    uVar4 = lib::L2CValue::as_number(aLStack144);
    uVar8 = lib::L2CValue::as_number(aLStack160);
    local_80 = uVar4 & 0xffffffff | (ulong)uVar8 << 0x20;
    uStack120 = 0;
    uVar8 = lib::L2CValue::as_integer(aLStack384);
    bVar1 = lib::L2CValue::as_bool(aLStack400);
    bVar1 = app::lua_bind::GroundModule__ray_check_hit_pos_target_impl
                      (this->moduleAccessor,(Vector2f *)&local_60,(Vector2f *)&local_70,
                       (Vector2f *)&local_80,uVar8,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_120,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack272,(float)local_80);
    lib::L2CValue::L2CValue(aLStack256,local_80._4_4_);
    lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_120);
    lib::L2CValue::operator_(aLStack224,aLStack272);
    lib::L2CValue::operator_(aLStack240,aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::L2CValue((L2CValue *)&local_120,true);
    uVar4 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_120);
    lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0x17a3d0abd0);
      fVar7 = (float)app::lua_bind::GroundModule__get_z_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack336,fVar7);
      lib::L2CValue::L2CValue(aLStack352,0.0);
      lib::L2CValue::L2CValue(aLStack368,0.0);
      HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_80);
      uVar4 = lib::L2CValue::as_number(aLStack224);
      lVar10 = lib::L2CValue::as_number(aLStack240);
      uVar8 = lib::L2CValue::as_number(aLStack336);
      local_120 = uVar4 & 0xffffffff | lVar10 << 0x20;
      uStack280 = (ulong)uVar8;
      uVar4 = lib::L2CValue::as_number(aLStack352);
      lVar10 = lib::L2CValue::as_number(aLStack304);
      uVar8 = lib::L2CValue::as_number(aLStack368);
      local_60 = uVar4 & 0xffffffff | lVar10 << 0x20;
      uStack88 = (ulong)uVar8;
      uVar8 = app::lua_bind::EffectModule__req_impl
                        (this->moduleAccessor,HVar6,(Vector3f *)&local_120,(Vector3f *)&local_60,1.0
                         ,0,-1,false,0);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,uVar8);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xcec209811);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0xec198c64d);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_120,iVar2);
    lib::L2CValue::L2CValue(aLStack336,_WEAPON_MEWTWO_SEARCH_INSTANCE_WORK_ID_INT_EFFECT_INTERVAL);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_120);
    iVar3 = lib::L2CValue::as_integer(aLStack336);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

