
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponZeldaPhantom::status::Attack_main(L2CWeaponZeldaPhantom *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  HitStatus HVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  Hash40 HVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
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
  ulong local_70;
  undefined8 uStack104;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_WEAPON_ZELDA_PHANTOM_INSTANCE_WORK_ID_INT_SITUATION);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_WEAPON_ZELDA_PHANTOM_INSTANCE_WORK_ID_FLOAT_CHARGE_LEVEL);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack144,fVar10);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_WEAPON_ZELDA_PHANTOM_INSTANCE_WORK_ID_INT_BUILD_STEP);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack160,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue(aLStack192,0xd4acc3054);
  lib::L2CValue::L2CValue(aLStack208,0x11f08999e4);
  uVar7 = lib::L2CValue::as_integer(aLStack192);
  uVar8 = lib::L2CValue::as_integer(aLStack208);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar7,uVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar10);
  lib::L2CValue::operator_((L2CValue *)&local_70,aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  fVar10 = (float)lib::L2CValue::as_number(aLStack176);
  app::lua_bind::AttackModule__set_power_add_status_impl(this->moduleAccessor,fVar10);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,SITUATION_KIND_AIR);
  uVar7 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack192,_SITUATION_KIND_GROUND);
    lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x40);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,GROUND_CORRECT_KIND_GROUND);
    GVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
  }
  else {
    lib::L2CValue::L2CValue(aLStack192,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x40);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,GROUND_CORRECT_KIND_AIR);
    GVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_WEAPON_ZELDA_PHANTOM_BUILD_STEP_04_A);
  uVar7 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_WEAPON_ZELDA_PHANTOM_BUILD_STEP_04_B);
    uVar7 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_WEAPON_ZELDA_PHANTOM_BUILD_STEP_06_B);
      uVar7 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,_WEAPON_ZELDA_PHANTOM_BUILD_STEP_08);
        uVar7 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0xae4e0921d);
          lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_70);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0x841938a9a);
          lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_70);
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0x8cc9b876f);
        lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_70);
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0xcf2adf55c);
      lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_70);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0xbe9ce1ee8);
    lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_70);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
  lib::L2CValue::L2CValue(aLStack224,1.0);
  lib::L2CValue::L2CValue(aLStack240,false);
  HVar9 = lib::L2CValue::as_hash(aLStack208);
  fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
  fVar11 = (float)lib::L2CValue::as_number(aLStack224);
  bVar1 = lib::L2CValue::as_bool(aLStack240);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar9,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue(aLStack224,_WEAPON_ZELDA_PHANTOM_INSTANCE_WORK_ID_FLAG_REBUILD);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_70);
    app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0xddd8416d6);
    lib::L2CValue::L2CValue(aLStack224,false);
    HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_70);
    bVar1 = lib::L2CValue::as_bool(aLStack224);
    app::lua_bind::ModelModule__set_mesh_visibility_impl
              (this->moduleAccessor,HVar9,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_HIT_STATUS_OFF);
    HVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::HitModule__set_status_all_impl(this->moduleAccessor,HVar5,0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue(aLStack224,_WEAPON_ZELDA_PHANTOM_BUILD_STEP_01_A);
    lib::L2CValue::L2CValue(aLStack256,_WEAPON_ZELDA_PHANTOM_INSTANCE_WORK_ID_INT_BUILD_STEP);
    iVar3 = lib::L2CValue::as_integer(aLStack256);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack240,iVar3);
    iVar3 = lib::L2CValue::as_integer(aLStack224);
    iVar6 = lib::L2CValue::as_integer(aLStack240);
    if ((iVar3 <= iVar6) && (iVar3 <= _WEAPON_ZELDA_PHANTOM_BUILD_STEP_TERM)) {
      do {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar3);
        FUN_710001a3d0(this,&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        if (iVar6 <= iVar3) break;
        bVar2 = iVar3 < _WEAPON_ZELDA_PHANTOM_BUILD_STEP_TERM;
        iVar3 = iVar3 + 1;
      } while (bVar2);
    }
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack224);
  }
  fVar10 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack256,fVar10);
  fVar10 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack272,fVar10);
  uVar7 = lib::L2CValue::as_number(aLStack256);
  uVar12 = lib::L2CValue::as_number(aLStack272);
  local_70 = uVar7 & 0xffffffff | (ulong)uVar12 << 0x20;
  uStack104 = 0;
  app::lua_bind::GroundModule__set_shape_safe_pos_impl(this->moduleAccessor,(Vector2f *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,Attack_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

