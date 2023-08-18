
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDiddyBunshin::status::Fly_main(L2CWeaponDiddyBunshin *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue *pLVar6;
  Weapon *pWVar7;
  void *pvVar8;
  ulong uVar9;
  BattleObjectModuleAccessor *pBVar10;
  L2CValue *pLVar11;
  ulong *puVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  long lVar16;
  undefined4 uVar17;
  undefined4 in_s3;
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  undefined auStack240 [32];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_DIDDY_BUNSHIN_INSTANCE_WORK_ID_INT_FLY_DIR);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_DIDDY_FINAL_DIR_UP);
  uVar4 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_DIDDY_FINAL_DIR_DOWN);
    uVar4 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x74a8bf220);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,true);
      HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_60);
      fVar13 = (float)lib::L2CValue::as_number(aLStack128);
      fVar14 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      uVar17 = 0;
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar5,fVar13,fVar14,(bool)(bVar1 & 1),0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x8ea1daeb6);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,true);
      HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_60);
      fVar13 = (float)lib::L2CValue::as_number(aLStack128);
      fVar14 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      uVar17 = 0;
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar5,fVar13,fVar14,(bool)(bVar1 & 1),0.0,false,false);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x8747e56d1);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,true);
    HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_60);
    fVar13 = (float)lib::L2CValue::as_number(aLStack128);
    fVar14 = (float)lib::L2CValue::as_number(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    uVar17 = 0;
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar5,fVar13,fVar14,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_DIDDY_BUNSHIN_INSTANCE_WORK_ID_FLOAT_ANGLE_X);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,fVar13);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  pWVar7 = (Weapon *)lib::L2CValue::as_pointer(pLVar6);
  uVar3 = app::lua_bind::Weapon__get_founder_id_impl(pWVar7);
  lib::L2CValue::L2CValue(aLStack144,uVar3);
  uVar3 = lib::L2CValue::as_integer(aLStack144);
  pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar3);
  if (pvVar8 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack160,(L2CValue *)&FIGHTER_STATUS_KIND_CLIFF_WAIT);
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,pvVar8);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xb54dafbfb);
  lib::L2CValue::L2CValue(aLStack192,0x903187f45);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar9 = lib::L2CValue::as_integer(aLStack192);
  pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar10,uVar4,uVar9);
  lib::L2CValue::L2CValue(aLStack176,fVar13);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xb54dafbfb);
  lib::L2CValue::L2CValue(aLStack208,0xd386875f2);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar9 = lib::L2CValue::as_integer(aLStack208);
  pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar10,uVar4,uVar9);
  lib::L2CValue::L2CValue(aLStack192,fVar13);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xb54dafbfb);
  lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),0xd5804249c);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar9 = lib::L2CValue::as_integer((L2CValue *)(auStack240 + 0x10));
  pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar10,uVar4,uVar9);
  lib::L2CValue::L2CValue(aLStack208,fVar13);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack240 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  uVar15 = app::sv_camera_manager::camera_range();
  local_60 = CONCAT44(fVar14,uVar15);
  uStack88 = CONCAT44(in_s3,uVar17);
  app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)&local_60);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack240 + 0x10),0x5b4ca7514);
  pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack240 + 0x10),0x47a67e768);
  lib::L2CValue::operator_(pLVar6,pLVar11);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack240 + 0x10),0x31ed91fca);
  pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack240 + 0x10),0x6895f72a4);
  lib::L2CValue::operator_(pLVar6,pLVar11);
  lib::L2CValue::operator_(aLStack272,aLStack288);
  lib::L2CValue::operator_(aLStack256,aLStack208);
  lib::L2CValue::operator_(aLStack176,(L2CValue *)auStack240);
  lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)auStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  pLVar6 = aLStack176;
  uVar4 = lib::L2CValue::operator_(aLStack192,pLVar6);
  if ((uVar4 & 1) != 0) {
    pLVar6 = aLStack192;
    lib::L2CValue::operator_(aLStack176,pLVar6);
  }
  lib::L2CAgent::math_rad((L2CAgent *)aLStack128,pLVar6);
  lib::L2CAgent::math_cos((L2CAgent *)auStack240,pLVar6);
  puVar12 = &local_60;
  lib::L2CValue::operator_(aLStack176,(L2CValue *)puVar12);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CAgent::math_sin((L2CAgent *)auStack240,(L2CValue *)puVar12);
  lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
  app::sv_kinetic_energy::set_accel(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue(aLStack288,-1.0);
  lib::L2CValue::L2CValue(aLStack304,-1.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
  app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
  app::sv_kinetic_energy::set_brake(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue(aLStack288,-1.0);
  lib::L2CValue::L2CValue(aLStack304,-1.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
  app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  app::sv_kinetic_energy::enable(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x5a);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  fVar14 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack336,fVar14);
  lib::L2CValue::operator_(aLStack320,aLStack336);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,-1);
  lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lib::L2CValue::L2CValue(aLStack368,0.0);
  uVar4 = lib::L2CValue::as_number(aLStack288);
  lVar16 = lib::L2CValue::as_number(aLStack352);
  uVar3 = lib::L2CValue::as_number(aLStack368);
  local_60 = uVar4 & 0xffffffff | lVar16 << 0x20;
  uStack88 = (ulong)uVar3;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_60,0);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_ANIMCMD_EFFECT);
  lib::L2CValue::L2CValue(aLStack288,0xd1426124c);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  HVar5 = lib::L2CValue::as_hash(aLStack288);
  app::lua_bind::MotionAnimcmdModule__call_script_single_impl(this->moduleAccessor,iVar2,HVar5,-1);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,&DAT_7100036980);
  lua2cpp::L2CFighterBase::shift(this,(L2CValue)0xa0);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue((L2CValue *)auStack240);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack240 + 0x10));
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

