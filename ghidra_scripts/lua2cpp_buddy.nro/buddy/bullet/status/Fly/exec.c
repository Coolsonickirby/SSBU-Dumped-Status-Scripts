
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponBuddyBullet::status::Fly_exec(L2CWeaponBuddyBullet *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Weapon *pWVar7;
  L2CValue *pLVar8;
  L2CValue *this_01;
  BattleObjectModuleAccessor *pBVar9;
  Hash40 HVar10;
  ulong uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined auStack328 [32];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [24];
  
  lib::L2CValue::L2CValue(aLStack120,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack120);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack328,iVar3);
  lib::L2CValue::L2CValue(aLStack232,0);
  uVar5 = lib::L2CValue::operator_(aLStack232,(L2CValue *)auStack328);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue((L2CValue *)auStack328);
  lib::L2CValue::_L2CValue(aLStack120);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack232,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar3 = lib::L2CValue::as_integer(aLStack232);
    app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack232);
  }
  iVar3 = app::lua_bind::GroundModule__get_touch_flag_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack184,iVar3);
  lib::L2CValue::L2CValue(aLStack232,_GROUND_TOUCH_FLAG_NONE);
  uVar5 = lib::L2CValue::operator__(aLStack184,aLStack232);
  lib::L2CValue::_L2CValue(aLStack232);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack136,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer(aLStack136);
    uVar13 = app::lua_bind::KineticModule__get_sum_speed_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack232,(float)uVar13);
    lib::L2CValue::L2CValue(aLStack216,(float)((ulong)uVar13 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)auStack328,aLStack232);
    lib::L2CValue::L2CValue(aLStack120,aLStack216);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xb8,(L2CValue)0x88);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::_L2CValue((L2CValue *)auStack328);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack136);
    this_00 = &this->globalTable;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
    pWVar7 = (Weapon *)lib::L2CValue::as_pointer(pLVar6);
    fVar12 = (float)app::WeaponSpecializer_BuddyBullet::get_bound_speed(pWVar7);
    lib::L2CValue::L2CValue(aLStack248,fVar12);
    lib::L2CValue::L2CValue(aLStack264,false);
    lib::L2CValue::L2CValue((L2CValue *)auStack328,_GROUND_TOUCH_FLAG_UP);
    lib::L2CValue::operator_(aLStack184,(L2CValue *)auStack328);
    lib::L2CValue::_L2CValue((L2CValue *)auStack328);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    if ((bVar1 & 1U) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x1fbdb2615);
      uVar5 = lib::L2CValue::operator_(aLStack248,pLVar6);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack328,true);
        lib::L2CValue::operator_(aLStack264,(L2CValue *)auStack328);
        lib::L2CValue::_L2CValue((L2CValue *)auStack328);
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack328,_GROUND_TOUCH_FLAG_LEFT);
    lib::L2CValue::operator_(aLStack184,(L2CValue *)auStack328);
    lib::L2CValue::_L2CValue((L2CValue *)auStack328);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    if ((bVar1 & 1U) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x18cdc1683);
      lib::L2CValue::L2CValue((L2CValue *)auStack328,0.0);
      uVar5 = lib::L2CValue::operator_(pLVar6,(L2CValue *)auStack328);
      lib::L2CValue::_L2CValue((L2CValue *)auStack328);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack328,true);
        lib::L2CValue::operator_(aLStack264,(L2CValue *)auStack328);
        lib::L2CValue::_L2CValue((L2CValue *)auStack328);
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack328,GROUND_TOUCH_FLAG_RIGHT);
    lib::L2CValue::operator_(aLStack184,(L2CValue *)auStack328);
    lib::L2CValue::_L2CValue((L2CValue *)auStack328);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    if ((bVar1 & 1U) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x18cdc1683);
      lib::L2CValue::L2CValue((L2CValue *)auStack328,0.0);
      uVar5 = lib::L2CValue::operator_((L2CValue *)auStack328,pLVar6);
      lib::L2CValue::_L2CValue((L2CValue *)auStack328);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack328,true);
        lib::L2CValue::operator_(aLStack264,(L2CValue *)auStack328);
        lib::L2CValue::_L2CValue((L2CValue *)auStack328);
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack328,GROUND_TOUCH_FLAG_DOWN);
    lib::L2CValue::operator_(aLStack184,(L2CValue *)auStack328);
    lib::L2CValue::_L2CValue((L2CValue *)auStack328);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    if ((bVar1 & 1U) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x1fbdb2615);
      lib::L2CValue::operator_(aLStack248);
      uVar5 = lib::L2CValue::operator_(pLVar6,(L2CValue *)auStack328);
      lib::L2CValue::_L2CValue((L2CValue *)auStack328);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack328,true);
        lib::L2CValue::operator_(aLStack264,(L2CValue *)auStack328);
        lib::L2CValue::_L2CValue((L2CValue *)auStack328);
      }
    }
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack264);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack328,_WEAPON_BUDDY_BULLET_INSTANCE_WORK_ID_INT_BUDDY_FOUNDER_ID);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack328);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack280,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)auStack328);
      lib::L2CValue::L2CValue(aLStack296);
      lib::L2CValue::L2CValue(aLStack136,_WEAPON_BUDDY_BULLET_INSTANCE_WORK_ID_INT_TYPE);
      iVar3 = lib::L2CValue::as_integer(aLStack136);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack120,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack328,_WEAPON_BUDDY_BULLET_TYPE_MISSILE);
      uVar5 = lib::L2CValue::operator__(aLStack120,(L2CValue *)auStack328);
      lib::L2CValue::_L2CValue((L2CValue *)auStack328);
      lib::L2CValue::_L2CValue(aLStack120);
      lib::L2CValue::_L2CValue(aLStack136);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack328,0x12407d730e);
        lib::L2CValue::operator_(aLStack296,(L2CValue *)auStack328);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)auStack328,0x130a1edc1b);
        lib::L2CValue::operator_(aLStack296,(L2CValue *)auStack328);
      }
      lib::L2CValue::_L2CValue((L2CValue *)auStack328);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x18cdc1683);
      this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x1fbdb2615);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
      lib::L2CValue::L2CValue(aLStack120,_WEAPON_BUDDY_BULLET_INSTANCE_WORK_ID_INT_BOUND_KIND);
      pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
      iVar3 = lib::L2CValue::as_integer(aLStack120);
      uVar4 = lib::L2CValue::as_integer(aLStack280);
      HVar10 = lib::L2CValue::as_hash(aLStack296);
      uVar13 = app::buddybomb::calc_bound_speed(pBVar9,iVar3,uVar4,HVar10);
      lib::L2CValue::L2CValue((L2CValue *)auStack328,(float)uVar13);
      pLVar6 = (L2CValue *)(auStack328 + 0x10);
      lib::L2CValue::L2CValue(pLVar6,(float)((ulong)uVar13 >> 0x20));
      lib::L2CValue::operator_(pLVar8,(L2CValue *)auStack328);
      lib::L2CValue::operator_(this_01,pLVar6);
      lib::L2CValue::_L2CValue(pLVar6);
      lib::L2CValue::_L2CValue((L2CValue *)auStack328);
      lib::L2CValue::_L2CValue(aLStack120);
      lib::L2CValue::L2CValue((L2CValue *)auStack328,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x18cdc1683);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x1fbdb2615);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack328);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar6);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar8);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue((L2CValue *)auStack328);
      lib::L2CValue::L2CValue(aLStack120,0.0);
      lib::L2CValue::L2CValue(aLStack152,_WEAPON_BUDDY_BULLET_INSTANCE_WORK_ID_INT_TYPE);
      iVar3 = lib::L2CValue::as_integer(aLStack152);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack136,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack328,_WEAPON_BUDDY_BULLET_TYPE_MISSILE);
      uVar5 = lib::L2CValue::operator__(aLStack136,(L2CValue *)auStack328);
      lib::L2CValue::_L2CValue((L2CValue *)auStack328);
      lib::L2CValue::_L2CValue(aLStack136);
      lib::L2CValue::_L2CValue(aLStack152);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack136,0xce2c373c3);
        lib::L2CValue::L2CValue(aLStack152,0x1a3cca659e);
        uVar5 = lib::L2CValue::as_integer(aLStack136);
        uVar11 = lib::L2CValue::as_integer(aLStack152);
        fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (this->moduleAccessor,uVar5,uVar11);
        lib::L2CValue::L2CValue((L2CValue *)auStack328,fVar12);
        lib::L2CValue::operator_(aLStack120,(L2CValue *)auStack328);
      }
      else {
        lib::L2CValue::L2CValue(aLStack136,0xce2c373c3);
        lib::L2CValue::L2CValue(aLStack152,0x1bc0325582);
        uVar5 = lib::L2CValue::as_integer(aLStack136);
        uVar11 = lib::L2CValue::as_integer(aLStack152);
        fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (this->moduleAccessor,uVar5,uVar11);
        lib::L2CValue::L2CValue((L2CValue *)auStack328,fVar12);
        lib::L2CValue::operator_(aLStack120,(L2CValue *)auStack328);
      }
      lib::L2CValue::_L2CValue((L2CValue *)auStack328);
      lib::L2CValue::_L2CValue(aLStack152);
      lib::L2CValue::_L2CValue(aLStack136);
      lib::L2CValue::L2CValue(aLStack152,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      pLVar6 = (L2CValue *)lib::L2CValue::as_integer(aLStack152);
      fVar12 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                                (this->moduleAccessor,(int)pLVar6);
      lib::L2CValue::L2CValue((L2CValue *)auStack328,fVar12);
      lib::L2CAgent::math_abs((L2CAgent *)auStack328,pLVar6);
      lib::L2CValue::_L2CValue((L2CValue *)auStack328);
      lib::L2CValue::_L2CValue(aLStack152);
      uVar5 = lib::L2CValue::operator_(aLStack120,aLStack136);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack168,_WEAPON_BUDDY_BULLET_STATUS_WORK_ID_FLAG_BOUNDED);
        iVar3 = lib::L2CValue::as_integer(aLStack168);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack152,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue((L2CValue *)auStack328,false);
        uVar5 = lib::L2CValue::operator__(aLStack152,(L2CValue *)auStack328);
        lib::L2CValue::_L2CValue((L2CValue *)auStack328);
        lib::L2CValue::_L2CValue(aLStack152);
        lib::L2CValue::_L2CValue(aLStack168);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack152,0x1738bcaf6b);
          HVar10 = lib::L2CValue::as_hash(aLStack152);
          iVar3 = app::lua_bind::SoundModule__play_se_impl
                            (this->moduleAccessor,HVar10,true,false,false,false,0);
          lib::L2CValue::L2CValue((L2CValue *)auStack328,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)auStack328);
        }
        else {
          lib::L2CValue::L2CValue(aLStack152,0x14ed34ef64);
          HVar10 = lib::L2CValue::as_hash(aLStack152);
          iVar3 = app::lua_bind::SoundModule__play_se_impl
                            (this->moduleAccessor,HVar10,true,false,false,false,0);
          lib::L2CValue::L2CValue((L2CValue *)auStack328,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)auStack328);
          lib::L2CValue::_L2CValue(aLStack152);
          lib::L2CValue::L2CValue(aLStack152,_WEAPON_BUDDY_BULLET_STATUS_WORK_ID_FLAG_BOUNDED);
          iVar3 = lib::L2CValue::as_integer(aLStack152);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        }
        lib::L2CValue::_L2CValue(aLStack152);
      }
      lib::L2CValue::_L2CValue(aLStack136);
      lib::L2CValue::_L2CValue(aLStack120);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
      pWVar7 = (Weapon *)lib::L2CValue::as_pointer(pLVar6);
      app::WeaponSpecializer_BuddyBullet::request_bound_effect(pWVar7);
      lib::L2CValue::_L2CValue(aLStack296);
      lib::L2CValue::_L2CValue(aLStack280);
    }
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack200);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack184);
  return;
}

