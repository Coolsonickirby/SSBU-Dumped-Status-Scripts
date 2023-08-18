
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPacmanBigpacman::status::Move_main(L2CWeaponPacmanBigpacman *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  Hash40 HVar8;
  L2CValue *pLVar9;
  ulong uVar10;
  ulong uVar11;
  BattleObjectModuleAccessor *pBVar12;
  void ***pppvVar13;
  L2CValue *pLVar14;
  BattleObjectModuleAccessor **ppBVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  long lVar20;
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  undefined auStack368 [16];
  undefined auStack352 [16];
  undefined auStack336 [16];
  undefined auStack320 [32];
  L2CValue aLStack288 [16];
  undefined auStack272 [16];
  undefined auStack256 [32];
  L2CValue aLStack224 [16];
  undefined auStack208 [32];
  L2CValue aLStack176 [16];
  void **local_a0;
  BattleObject *pBStack152;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x4ef3e3778);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),1.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack208,false);
  HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_a0);
  fVar16 = (float)lib::L2CValue::as_number(aLStack176);
  fVar17 = (float)lib::L2CValue::as_number((L2CValue *)(auStack208 + 0x10));
  bVar1 = lib::L2CValue::as_bool((L2CValue *)auStack208);
  ppBVar15 = &this->moduleAccessor;
  app::lua_bind::MotionModule__change_motion_impl
            (*ppBVar15,HVar8,fVar16,fVar17,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue((L2CValue *)auStack208);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_a0,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_PREV_MOVE_FRAME);
  iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar6);
  lib::L2CValue::L2CValue(aLStack176,fVar16);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  fVar16 = (float)lib::L2CValue::as_number(aLStack176);
  app::lua_bind::MotionModule__set_frame_impl(*ppBVar15,fVar16,true);
  lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),30.0);
  this_00 = &this->globalTable;
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,_WEAPON_PACMAN_BIGPACMAN_STATUS_KIND_EAT);
  uVar10 = lib::L2CValue::operator__(pLVar9,(L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  if ((uVar10 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.0);
    lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),(L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_a0,_WEAPON_PACMAN_BIGPACMAN_MOTION_PART_SET_KIND_MATERIAL);
  lib::L2CValue::L2CValue((L2CValue *)auStack208,0x59ec55c97);
  lib::L2CValue::L2CValue(aLStack224,1.0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),true);
  lib::L2CValue::L2CValue((L2CValue *)auStack256,false);
  lib::L2CValue::L2CValue((L2CValue *)auStack272,0.0);
  lib::L2CValue::L2CValue(aLStack288,false);
  lib::L2CValue::L2CValue((L2CValue *)(auStack320 + 0x10),false);
  lib::L2CValue::L2CValue((L2CValue *)auStack320,true);
  iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  HVar8 = lib::L2CValue::as_hash((L2CValue *)auStack208);
  fVar16 = (float)lib::L2CValue::as_number((L2CValue *)(auStack208 + 0x10));
  fVar17 = (float)lib::L2CValue::as_number(aLStack224);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)(auStack256 + 0x10));
  bVar2 = lib::L2CValue::as_bool((L2CValue *)auStack256);
  fVar18 = (float)lib::L2CValue::as_number((L2CValue *)auStack272);
  bVar3 = lib::L2CValue::as_bool(aLStack288);
  bVar4 = lib::L2CValue::as_bool((L2CValue *)(auStack320 + 0x10));
  bVar5 = lib::L2CValue::as_bool((L2CValue *)auStack320);
  app::lua_bind::MotionModule__add_motion_partial_impl
            (*ppBVar15,iVar6,HVar8,fVar16,fVar17,(bool)(bVar1 & 1),(bool)(bVar2 & 1),fVar18,
             (bool)(bVar3 & 1),(bool)(bVar4 & 1),(bool)(bVar5 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)auStack320);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack320 + 0x10));
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)auStack272);
  lib::L2CValue::_L2CValue((L2CValue *)auStack256);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)auStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,_WEAPON_PACMAN_BIGPACMAN_AREA_KIND_SEARCH_ITEM);
  lib::L2CValue::L2CValue((L2CValue *)auStack208,true);
  iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)auStack208);
  app::lua_bind::AreaModule__enable_area_impl(*ppBVar15,iVar6,(bool)(bVar1 & 1),-1);
  lib::L2CValue::_L2CValue((L2CValue *)auStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack208,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_INT_NO_EAT_FRAME);
  iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  iVar7 = lib::L2CValue::as_integer((L2CValue *)auStack208);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar15,iVar6,iVar7);
  lib::L2CValue::_L2CValue((L2CValue *)auStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack208,
             _WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_INT_FINISH_EFFECT_HANDLE);
  iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  iVar7 = lib::L2CValue::as_integer((L2CValue *)auStack208);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar15,iVar6,iVar7);
  lib::L2CValue::_L2CValue((L2CValue *)auStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,_WEAPON_PACMAN_BIGPACMAN_STATUS_KIND_EAT);
  uVar10 = lib::L2CValue::operator__(pLVar9,(L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  if ((uVar10 & 1) == 0) {
    fVar16 = (float)app::lua_bind::PostureModule__pos_x_impl(*ppBVar15);
    lib::L2CValue::L2CValue(aLStack224,fVar16);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.0);
    lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_a0,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_START_POS_X);
    fVar16 = (float)lib::L2CValue::as_number((L2CValue *)auStack208);
    iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar6);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    fVar16 = (float)app::lua_bind::PostureModule__pos_y_impl(*ppBVar15);
    lib::L2CValue::L2CValue(aLStack224,fVar16);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.0);
    lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_a0,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_START_POS_Y);
    fVar16 = (float)lib::L2CValue::as_number((L2CValue *)auStack208);
    iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar6);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xf997d7d84);
    lib::L2CValue::L2CValue(aLStack224,0xab986e19b);
    uVar10 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    uVar11 = lib::L2CValue::as_integer(aLStack224);
    fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar10,uVar11);
    lib::L2CValue::L2CValue((L2CValue *)auStack208,fVar16);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.0);
    lib::L2CValue::operator_((L2CValue *)auStack208,(L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_a0,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_SPEED);
    fVar16 = (float)lib::L2CValue::as_number(aLStack224);
    iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar6);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xf997d7d84);
    lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),0xaeb5c2988);
    uVar10 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    uVar11 = lib::L2CValue::as_integer((L2CValue *)(auStack256 + 0x10));
    fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar10,uVar11);
    lib::L2CValue::L2CValue(aLStack224,fVar16);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.0);
    lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_a0,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_ACCEL);
    fVar16 = (float)lib::L2CValue::as_number((L2CValue *)(auStack256 + 0x10));
    iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar6);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
    fVar16 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar15);
    lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),fVar16);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,1.0);
    uVar10 = lib::L2CValue::operator__((L2CValue *)(auStack256 + 0x10),(L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
    if ((uVar10 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,180.0);
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack256 + 0x10),
                 _WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_MOVE_DEGREE);
      fVar16 = (float)lib::L2CValue::as_number((L2CValue *)&local_a0);
      iVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack256 + 0x10));
      app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar6);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,180.0);
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack256 + 0x10),
                 _WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_PATH_DEGREE);
      fVar16 = (float)lib::L2CValue::as_number((L2CValue *)&local_a0);
      iVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack256 + 0x10));
      app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar6);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.0);
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack256 + 0x10),
                 _WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_MOVE_DEGREE);
      fVar16 = (float)lib::L2CValue::as_number((L2CValue *)&local_a0);
      iVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack256 + 0x10));
      app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar6);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.0);
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack256 + 0x10),
                 _WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_PATH_DEGREE);
      fVar16 = (float)lib::L2CValue::as_number((L2CValue *)&local_a0);
      iVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack256 + 0x10));
      app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar6);
    }
    lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  app::lua_bind::KineticModule__enable_energy_impl(*ppBVar15,iVar6);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_a0,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_MOVE_DEGREE);
  iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar6);
  lib::L2CValue::L2CValue((L2CValue *)auStack208,fVar16);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_a0,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_SPEED);
  pLVar9 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,(int)pLVar9);
  lib::L2CValue::L2CValue(aLStack224,fVar16);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CAgent::math_rad((L2CAgent *)auStack208,pLVar9);
  lib::L2CAgent::math_cos((L2CAgent *)auStack256,pLVar9);
  pppvVar13 = &local_a0;
  lib::L2CValue::operator_(aLStack224,(L2CValue *)pppvVar13);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack256);
  lib::L2CAgent::math_rad((L2CAgent *)auStack208,(L2CValue *)pppvVar13);
  lib::L2CAgent::math_sin((L2CAgent *)auStack272,(L2CValue *)pppvVar13);
  lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack272);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_a0);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack256 + 0x10));
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack256);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xf997d7d84);
  lib::L2CValue::L2CValue(aLStack288,0x9bc3ffffd);
  pLVar9 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_a0);
  uVar10 = lib::L2CValue::as_integer(aLStack288);
  fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,(ulong)pLVar9,uVar10);
  lib::L2CValue::L2CValue((L2CValue *)auStack272,fVar16);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CAgent::math_rad((L2CAgent *)auStack208,pLVar9);
  lib::L2CAgent::math_cos((L2CAgent *)auStack320,pLVar9);
  pLVar9 = (L2CValue *)(auStack320 + 0x10);
  lib::L2CValue::operator_((L2CValue *)auStack272,pLVar9);
  lib::L2CAgent::math_abs((L2CAgent *)&local_a0,pLVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack320 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack320);
  lib::L2CAgent::math_rad((L2CAgent *)auStack208,pLVar9);
  lib::L2CAgent::math_sin((L2CAgent *)auStack336,pLVar9);
  pLVar9 = (L2CValue *)auStack320;
  lib::L2CValue::operator_((L2CValue *)auStack272,pLVar9);
  lib::L2CAgent::math_abs((L2CAgent *)&local_a0,pLVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack320);
  lib::L2CValue::_L2CValue((L2CValue *)auStack336);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_a0);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack320 + 0x10));
  app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_a0);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack320 + 0x10));
  app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_a0,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_ACCEL);
  pLVar9 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,(int)pLVar9);
  lib::L2CValue::L2CValue((L2CValue *)auStack320,fVar16);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CAgent::math_rad((L2CAgent *)auStack208,pLVar9);
  lib::L2CAgent::math_cos((L2CAgent *)auStack352,pLVar9);
  pppvVar13 = &local_a0;
  lib::L2CValue::operator_((L2CValue *)auStack320,(L2CValue *)pppvVar13);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack352);
  lib::L2CAgent::math_rad((L2CAgent *)auStack208,(L2CValue *)pppvVar13);
  lib::L2CAgent::math_sin((L2CAgent *)auStack368,(L2CValue *)pppvVar13);
  lib::L2CValue::operator_((L2CValue *)auStack320,(L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack368);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_a0);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack336);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack352);
  app::sv_kinetic_energy::set_accel(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,_WEAPON_PACMAN_BIGPACMAN_STATUS_KIND_EAT);
  uVar10 = lib::L2CValue::operator__(pLVar9,(L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  if ((uVar10 & 1) == 0) {
    fVar16 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar15);
    lib::L2CValue::L2CValue((L2CValue *)auStack368,fVar16);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,-1.0);
    uVar10 = lib::L2CValue::operator__((L2CValue *)auStack368,(L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack368);
    if ((uVar10 & 1) == 0) goto LAB_7100004454;
    lib::L2CValue::L2CValue((L2CValue *)auStack368,0.0);
    lib::L2CValue::L2CValue(aLStack384,0.0);
    lib::L2CValue::L2CValue(aLStack400,180.0);
    uVar10 = lib::L2CValue::as_number((L2CValue *)auStack368);
    lVar20 = lib::L2CValue::as_number(aLStack384);
    uVar19 = lib::L2CValue::as_number(aLStack400);
    local_a0 = (void **)(uVar10 & 0xffffffff | lVar20 << 0x20);
    pBStack152 = (BattleObject *)(ulong)uVar19;
    app::lua_bind::PostureModule__set_rot_impl(*ppBVar15,(Vector3f *)&local_a0,0);
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_a0,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_MOVE_DEGREE);
    iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar6);
    lib::L2CValue::L2CValue((L2CValue *)auStack368,fVar16);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    pLVar14 = (L2CValue *)0x5;
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar9);
    fVar16 = (float)app::SlopeModuleSimple::gravity_angle(pBVar12);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,fVar16);
    lib::L2CAgent::math_deg((L2CAgent *)&local_a0,pLVar14);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::operator_((L2CValue *)auStack368,aLStack384);
    lib::L2CValue::L2CValue(aLStack416,0.0);
    lib::L2CValue::L2CValue(aLStack432,0.0);
    uVar10 = lib::L2CValue::as_number(aLStack416);
    lVar20 = lib::L2CValue::as_number(aLStack432);
    uVar19 = lib::L2CValue::as_number(aLStack400);
    local_a0 = (void **)(uVar10 & 0xffffffff | lVar20 << 0x20);
    pBStack152 = (BattleObject *)(ulong)uVar19;
    app::lua_bind::PostureModule__set_rot_impl(*ppBVar15,(Vector3f *)&local_a0,0);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack416);
  }
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue((L2CValue *)auStack368);
LAB_7100004454:
  fVar16 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar15);
  lib::L2CValue::L2CValue(aLStack384,fVar16);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.0);
  lib::L2CValue::operator_(aLStack384,(L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_a0,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_START_LR);
  fVar16 = (float)lib::L2CValue::as_number((L2CValue *)auStack368);
  iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar6);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack368);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xf997d7d84);
  lib::L2CValue::L2CValue(aLStack384,0xc145ff500);
  uVar10 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  uVar11 = lib::L2CValue::as_integer(aLStack384);
  fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar10,uVar11);
  lib::L2CValue::L2CValue((L2CValue *)auStack368,fVar16);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,10.0);
  lib::L2CValue::operator_((L2CValue *)auStack368,(L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  fVar16 = (float)lib::L2CValue::as_number(aLStack384);
  app::lua_bind::ModelModule__set_depth_offset_impl(*ppBVar15,fVar16);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::L2CValue(aLStack384,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar6 = lib::L2CValue::as_integer(aLStack384);
  iVar6 = app::lua_bind::WorkModule__get_int_impl(*ppBVar15,iVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,iVar6);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::L2CValue(aLStack400,0xf997d7d84);
  lib::L2CValue::L2CValue(aLStack416,0xb47a1798d);
  uVar10 = lib::L2CValue::as_integer(aLStack400);
  uVar11 = lib::L2CValue::as_integer(aLStack416);
  iVar6 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar15,uVar10,uVar11);
  lib::L2CValue::L2CValue(aLStack384,iVar6);
  uVar10 = lib::L2CValue::operator_((L2CValue *)&local_a0,aLStack384);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  if ((uVar10 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack384,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLAG_FLASH);
    iVar6 = lib::L2CValue::as_integer(aLStack384);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar15,iVar6);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::L2CValue(aLStack384,_FIGHTER_ANIMCMD_GAME);
    lib::L2CValue::L2CValue(aLStack400,0xa000bec52);
    iVar6 = lib::L2CValue::as_integer(aLStack384);
    HVar8 = lib::L2CValue::as_hash(aLStack400);
    app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar15,iVar6,HVar8,-1);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack384);
  }
  lib::L2CValue::L2CValue(aLStack448,&DAT_7100004db0);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack368);
  lib::L2CValue::_L2CValue((L2CValue *)auStack352);
  lib::L2CValue::_L2CValue((L2CValue *)auStack336);
  lib::L2CValue::_L2CValue((L2CValue *)auStack320);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack320 + 0x10));
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)auStack272);
  lib::L2CValue::_L2CValue((L2CValue *)auStack256);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)auStack208);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
  lib::L2CValue::_L2CValue(aLStack176);
  return;
}

