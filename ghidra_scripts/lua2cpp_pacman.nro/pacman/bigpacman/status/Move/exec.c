
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPacmanBigpacman::status::Move_exec(L2CWeaponPacmanBigpacman *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  Hash40 HVar7;
  L2CValue *pLVar8;
  Hash40 HVar9;
  ulong *puVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  long lVar15;
  undefined8 uVar16;
  int in_stack_fffffffffffffe54;
  undefined in_stack_fffffffffffffe5c;
  ulong local_160;
  ulong uStack344;
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  undefined auStack288 [16];
  undefined auStack272 [32];
  L2CValue aLStack240 [16];
  undefined auStack224 [16];
  undefined auStack208 [16];
  undefined auStack192 [16];
  undefined auStack176 [16];
  undefined auStack160 [32];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  BattleObjectModuleAccessor *local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack112,0.0);
  ppBVar11 = &this->moduleAccessor;
  fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,-1.0);
  uVar5 = lib::L2CValue::operator__((L2CValue *)&local_60,(L2CValue *)&local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_160,180.0);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  }
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack160 + 0x10));
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,1);
  lib::L2CValue::operator_((L2CValue *)&local_60,(L2CValue *)&local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::L2CValue((L2CValue *)&local_160,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_160);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar3,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack160 + 0x10),_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLAG_FLASH);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack160 + 0x10));
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  lib::L2CValue::operator_((L2CValue *)&local_60);
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf997d7d84);
    lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0xb47a1798d);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack160 + 0x10));
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_160,iVar3);
    uVar5 = lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_160,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLAG_FLASH);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_160);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_160);
      lib::L2CValue::L2CValue((L2CValue *)&local_160,_FIGHTER_ANIMCMD_GAME);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0xa000bec52);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_160);
      HVar7 = lib::L2CValue::as_hash((L2CValue *)&local_60);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar11,iVar3,HVar7,-1);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    }
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack160 + 0x10),
             _WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLAG_FINISH_SPEED);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack160 + 0x10));
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  lib::L2CValue::operator_((L2CValue *)&local_60);
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf997d7d84);
    lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0x19a4872b36);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack160 + 0x10));
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_160,iVar3);
    uVar5 = lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_160,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLAG_FINISH_SPEED)
      ;
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_160);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_160);
      lib::L2CValue::L2CValue((L2CValue *)&local_160,0xf997d7d84);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0xc0697833e);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_160);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),fVar12);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_160);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_160,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_MOVE_DEGREE)
      ;
      pLVar8 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_160);
      fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,(int)pLVar8);
      lib::L2CValue::L2CValue((L2CValue *)auStack160,fVar12);
      lib::L2CValue::_L2CValue((L2CValue *)&local_160);
      lib::L2CValue::L2CValue((L2CValue *)auStack176);
      lib::L2CValue::L2CValue((L2CValue *)auStack192);
      lib::L2CAgent::math_rad((L2CAgent *)auStack160,pLVar8);
      lib::L2CAgent::math_cos((L2CAgent *)auStack208,pLVar8);
      lib::L2CValue::operator_((L2CValue *)(auStack160 + 0x10),(L2CValue *)&local_60);
      puVar10 = &local_160;
      lib::L2CValue::operator_((L2CValue *)auStack176,(L2CValue *)puVar10);
      lib::L2CValue::_L2CValue((L2CValue *)&local_160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      lib::L2CAgent::math_rad((L2CAgent *)auStack160,(L2CValue *)puVar10);
      lib::L2CAgent::math_sin((L2CAgent *)auStack208,(L2CValue *)puVar10);
      lib::L2CValue::operator_((L2CValue *)(auStack160 + 0x10),(L2CValue *)&local_60);
      lib::L2CValue::operator_((L2CValue *)auStack192,(L2CValue *)&local_160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      lib::L2CValue::L2CValue((L2CValue *)&local_160,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack176);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack192);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue((L2CValue *)&local_160);
      pLVar8 = (L2CValue *)(ulong)_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL;
      lib::L2CValue::L2CValue((L2CValue *)&local_160,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CAgent::math_abs((L2CAgent *)auStack176,pLVar8);
      lib::L2CAgent::math_abs((L2CAgent *)auStack192,pLVar8);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack208);
      app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_160);
      pLVar8 = (L2CValue *)(ulong)_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL;
      lib::L2CValue::L2CValue((L2CValue *)&local_160,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CAgent::math_abs((L2CAgent *)auStack176,pLVar8);
      lib::L2CAgent::math_abs((L2CAgent *)auStack192,pLVar8);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack208);
      app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_160);
      lib::L2CValue::L2CValue((L2CValue *)&local_160,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack208,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack208);
      app::sv_kinetic_energy::set_accel(this->luaStateAgent);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_160);
      lib::L2CValue::L2CValue((L2CValue *)auStack224,0x115ca63753);
      lib::L2CValue::L2CValue(aLStack240,0x31ed91fca);
      lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),0.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack272,0.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack288,0.0);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      HVar7 = lib::L2CValue::as_hash((L2CValue *)auStack224);
      HVar9 = lib::L2CValue::as_hash(aLStack240);
      uVar5 = lib::L2CValue::as_number((L2CValue *)(auStack272 + 0x10));
      lVar15 = lib::L2CValue::as_number((L2CValue *)auStack272);
      uVar13 = lib::L2CValue::as_number((L2CValue *)auStack288);
      local_160 = uVar5 & 0xffffffff | lVar15 << 0x20;
      uStack344 = (ulong)uVar13;
      uVar5 = lib::L2CValue::as_number(aLStack112);
      lVar15 = lib::L2CValue::as_number(aLStack304);
      uVar13 = lib::L2CValue::as_number(aLStack320);
      local_60 = (BattleObjectModuleAccessor *)(uVar5 & 0xffffffff | lVar15 << 0x20);
      uStack88 = (ulong)uVar13;
      uVar13 = app::lua_bind::EffectModule__req_follow_impl
                         (*ppBVar11,HVar7,HVar9,(Vector3f *)&local_160,(Vector3f *)&local_60,1.0,
                          false,0,0,-1,in_stack_fffffffffffffe54,0,(bool)in_stack_fffffffffffffe5c,
                          false);
      lib::L2CValue::L2CValue((L2CValue *)auStack208,uVar13);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue((L2CValue *)auStack288);
      lib::L2CValue::_L2CValue((L2CValue *)auStack272);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_160,
                 _WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_INT_FINISH_EFFECT_HANDLE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack208);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_160);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar3,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_160);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      lib::L2CValue::_L2CValue((L2CValue *)auStack160);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
    }
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_160,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_INT_NO_EAT_FRAME);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_160);
  app::lua_bind::WorkModule__inc_int_impl(*ppBVar11,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack160 + 0x10),
             _WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLAG_FINISH_SPEED);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack160 + 0x10));
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  lib::L2CValue::operator_((L2CValue *)&local_60);
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_160,0xf997d7d84);
    lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0x1234e2c4c4);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_160);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack160 + 0x10));
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    uVar5 = lib::L2CValue::operator__((L2CValue *)&local_60,pLVar8);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10));
      lib::L2CValue::L2CValue((L2CValue *)auStack160);
      lib::L2CValue::L2CValue((L2CValue *)auStack176,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack176);
      uVar16 = app::sv_kinetic_energy::get_speed(this->luaStateAgent);
      lib::L2CValue::L2CValue((L2CValue *)&local_160,(float)uVar16);
      lib::L2CValue::L2CValue(aLStack336,(float)((ulong)uVar16 >> 0x20));
      lib::L2CValue::operator_((L2CValue *)(auStack160 + 0x10),(L2CValue *)&local_160);
      lib::L2CValue::operator_((L2CValue *)auStack160,aLStack336);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue((L2CValue *)&local_160);
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      fVar12 = (float)lib::L2CValue::as_number((L2CValue *)(auStack160 + 0x10));
      fVar14 = (float)lib::L2CValue::as_number((L2CValue *)auStack160);
      fVar12 = (float)app::sv_math::vec2_length(fVar12,fVar14);
      lib::L2CValue::L2CValue((L2CValue *)&local_160,fVar12);
      lib::L2CValue::L2CValue((L2CValue *)auStack192,0xf997d7d84);
      lib::L2CValue::L2CValue((L2CValue *)auStack208,0x9bc3ffffd);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack192);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack208);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar12);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      uVar5 = lib::L2CValue::operator_((L2CValue *)&local_160,(L2CValue *)auStack176);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack208,0xf997d7d84);
        lib::L2CValue::L2CValue((L2CValue *)auStack224,0x9e04f3c24);
        uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack208);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack224);
        fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6);
        lib::L2CValue::L2CValue((L2CValue *)auStack192,fVar12);
        lib::L2CValue::_L2CValue((L2CValue *)auStack224);
        lib::L2CValue::_L2CValue((L2CValue *)auStack208);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack208,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_ACCEL);
        fVar12 = (float)lib::L2CValue::as_number((L2CValue *)auStack192);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack208);
        app::lua_bind::WorkModule__add_float_impl(*ppBVar11,fVar12,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)auStack208);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack224,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_ACCEL);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack224);
        fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)auStack208,fVar12);
        lib::L2CValue::_L2CValue((L2CValue *)auStack224);
        lib::L2CValue::L2CValue
                  (aLStack240,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_MOVE_DEGREE);
        pLVar8 = (L2CValue *)lib::L2CValue::as_integer(aLStack240);
        fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,(int)pLVar8);
        lib::L2CValue::L2CValue((L2CValue *)auStack224,fVar12);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CAgent::math_rad((L2CAgent *)auStack224,pLVar8);
        lib::L2CAgent::math_cos((L2CAgent *)auStack272,pLVar8);
        pLVar8 = (L2CValue *)(auStack272 + 0x10);
        lib::L2CValue::operator_((L2CValue *)auStack208,pLVar8);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)auStack272);
        lib::L2CAgent::math_rad((L2CAgent *)auStack224,pLVar8);
        lib::L2CAgent::math_sin((L2CAgent *)auStack288,pLVar8);
        lib::L2CValue::operator_((L2CValue *)auStack208,(L2CValue *)auStack272);
        lib::L2CValue::_L2CValue((L2CValue *)auStack272);
        lib::L2CValue::_L2CValue((L2CValue *)auStack288);
        lib::L2CValue::L2CValue((L2CValue *)auStack272,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack272);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack272 + 0x10));
        app::sv_kinetic_energy::set_accel(this->luaStateAgent);
        lib::L2CValue::_L2CValue((L2CValue *)auStack272);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue((L2CValue *)auStack224);
        lib::L2CValue::_L2CValue((L2CValue *)auStack208);
        lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      }
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      lib::L2CValue::_L2CValue((L2CValue *)&local_160);
      lib::L2CValue::_L2CValue((L2CValue *)auStack160);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

