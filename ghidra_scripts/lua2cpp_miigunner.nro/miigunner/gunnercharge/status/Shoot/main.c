
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMiigunnerGunnercharge::status::Shoot_main
          (L2CWeaponMiigunnerGunnercharge *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  Hash40 HVar6;
  ulong uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0x57044fcbe);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar6 = lib::L2CValue::as_hash(aLStack96);
  fVar9 = (float)lib::L2CValue::as_number(aLStack112);
  fVar10 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar6,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_MIIGUNNER_GUNNERCHARGE_INSTANCE_WORK_ID_FLOAT_CHARGE);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  fVar9 = (float)lib::L2CValue::as_number(aLStack96);
  app::lua_bind::AttackModule__set_lerp_ratio_impl(this->moduleAccessor,fVar9,0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_GROUND_TOUCH_FLAG_ALL);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    fVar9 = (float)app::lua_bind::GroundModule__get_width_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,fVar9);
    lib::L2CValue::L2CValue(aLStack96,0.5);
    lib::L2CValue::operator_(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    uVar7 = app::lua_bind::AttackModule__part_size_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,uVar7);
    lib::L2CValue::L2CValue(aLStack96,1);
    lib::L2CValue::operator_(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    if (-1 < iVar3) {
      iVar8 = 0;
      do {
        lib::L2CValue::L2CValue(aLStack144,iVar8);
        iVar5 = lib::L2CValue::as_integer(aLStack144);
        bVar1 = app::lua_bind::AttackModule__is_attack_impl(this->moduleAccessor,iVar5,false);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack96,iVar8);
          iVar5 = lib::L2CValue::as_integer(aLStack96);
          fVar9 = (float)lib::L2CValue::as_number(aLStack112);
          app::lua_bind::AttackModule__set_size_impl(this->moduleAccessor,iVar5,fVar9);
          lib::L2CValue::_L2CValue(aLStack96);
        }
        bVar2 = iVar8 < iVar3;
        iVar8 = iVar8 + 1;
      } while (bVar2);
    }
    lib::L2CValue::L2CValue(aLStack96,2);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::StopModule__set_other_stop_impl(this->moduleAccessor,iVar3,0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              (aLStack96,_WEAPON_MIIGUNNER_GUNNERCHARGE_INSTANCE_WORK_ID_FLAG_GROUND_TOUCH);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack96,Shoot_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

