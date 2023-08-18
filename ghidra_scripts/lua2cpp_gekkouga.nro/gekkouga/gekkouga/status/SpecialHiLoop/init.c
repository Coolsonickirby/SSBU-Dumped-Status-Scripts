
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGekkouga::status::SpecialHiLoop_init(L2CFighterGekkouga *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong *puVar7;
  L2CValue *pLVar8;
  ulong *this_00;
  Hash40 HVar9;
  undefined8 *puVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  undefined8 uVar17;
  long lVar18;
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  ulong local_200;
  ulong uStack504;
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  undefined auStack400 [16];
  undefined auStack384 [32];
  undefined auStack352 [32];
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
  undefined8 local_70;
  lua_State *plStack104;
  
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack240,0);
  lib::L2CValue::L2CValue(aLStack256,0);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue(aLStack288,0);
  lib::L2CValue::L2CValue(aLStack304,0);
  lib::L2CValue::L2CValue(aLStack320,false);
  lib::L2CValue::L2CValue((L2CValue *)(auStack352 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack352,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack384 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack384,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,false);
  lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_STICK_X)
  ;
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  ppBVar11 = &this->moduleAccessor;
  fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,fVar12);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_STICK_Y)
  ;
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,fVar12);
  lib::L2CValue::operator_((L2CValue *)auStack352,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::operator_(aLStack128,aLStack128);
  lib::L2CValue::operator_((L2CValue *)auStack352,(L2CValue *)auStack352);
  pLVar6 = aLStack416;
  lib::L2CValue::operator_((L2CValue *)auStack400,pLVar6);
  lib::L2CAgent::math_sqrt((L2CAgent *)&local_70,pLVar6);
  lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue((L2CValue *)auStack400);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,0.999);
  uVar4 = lib::L2CValue::operator_((L2CValue *)&local_200,aLStack304);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_200,0.999);
    lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_200);
    lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)auStack400,0xaca5b425b);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack400);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,fVar12);
  uVar4 = lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)auStack400);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,GROUND_TOUCH_FLAG_DOWN);
    uVar16 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar16);
    lib::L2CValue::L2CValue((L2CValue *)&local_200,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_200);
    lib::L2CValue::_L2CValue((L2CValue *)&local_200);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_200,true);
      lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_200);
      goto LAB_71000119a8;
    }
    lib::L2CValue::L2CValue(aLStack416,GROUND_TOUCH_FLAG_DOWN);
    uVar16 = lib::L2CValue::as_integer(aLStack416);
    uVar17 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar11,uVar16);
    lib::L2CValue::L2CValue(aLStack448,(float)uVar17);
    lib::L2CValue::L2CValue(aLStack432,(float)((ulong)uVar17 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)&local_200,aLStack448);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack432);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_200);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack416);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack400,0x18cdc1683);
    lib::L2CValue::operator_((L2CValue *)(auStack352 + 0x10),pLVar6);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack400,0x1fbdb2615);
    lib::L2CValue::operator_(aLStack256,pLVar6);
    fVar12 = (float)lib::L2CValue::as_number((L2CValue *)(auStack352 + 0x10));
    fVar15 = (float)lib::L2CValue::as_number(aLStack256);
    fVar13 = (float)lib::L2CValue::as_number(aLStack128);
    fVar14 = (float)lib::L2CValue::as_number((L2CValue *)auStack352);
    fVar12 = (float)app::sv_math::vec2_angle(fVar12,fVar15,fVar13,fVar14);
    lib::L2CValue::L2CValue((L2CValue *)&local_200,fVar12);
    puVar7 = &local_200;
    lib::L2CValue::operator_((L2CValue *)(auStack384 + 0x10),(L2CValue *)puVar7);
    lib::L2CValue::_L2CValue((L2CValue *)&local_200);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,90.0);
    lib::L2CAgent::math_rad((L2CAgent *)&local_70,(L2CValue *)puVar7);
    uVar4 = lib::L2CValue::operator_((L2CValue *)(auStack384 + 0x10),(L2CValue *)&local_200);
    lib::L2CValue::_L2CValue((L2CValue *)&local_200);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_200,true);
      lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_200);
      lib::L2CValue::_L2CValue((L2CValue *)&local_200);
    }
    bVar2 = app::lua_bind::GroundModule__is_passable_ground_impl(*ppBVar11);
    lib::L2CValue::L2CValue((L2CValue *)&local_200,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_200);
    lib::L2CValue::_L2CValue((L2CValue *)&local_200);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_200,true);
      lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_200);
      lib::L2CValue::_L2CValue((L2CValue *)&local_200);
    }
    puVar7 = (ulong *)auStack400;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_200,true);
    lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_200);
LAB_71000119a8:
    puVar7 = &local_200;
  }
  lib::L2CValue::_L2CValue((L2CValue *)puVar7);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,0.0);
  lib::L2CValue::operator_((L2CValue *)auStack240,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,0.0);
  lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack320);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::operator_((L2CValue *)auStack240,aLStack128);
    lib::L2CValue::operator_(aLStack288,(L2CValue *)auStack352);
    fVar12 = (float)lib::L2CValue::as_number((L2CValue *)auStack240);
    fVar15 = (float)lib::L2CValue::as_number(aLStack288);
    uVar17 = app::sv_math::vec2_normalize(fVar12,fVar15);
    lib::L2CValue::L2CValue((L2CValue *)&local_200,(float)uVar17);
    lib::L2CValue::L2CValue(aLStack496,(float)((ulong)uVar17 >> 0x20));
    lib::L2CValue::operator_((L2CValue *)auStack240,(L2CValue *)&local_200);
    lib::L2CValue::operator_(aLStack288,aLStack496);
    lib::L2CValue::_L2CValue(aLStack496);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1086bc4a93);
    lib::L2CValue::L2CValue((L2CValue *)auStack400,0xaca5b425b);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    pLVar8 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack400);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar4,(ulong)pLVar8);
    lib::L2CValue::L2CValue((L2CValue *)&local_200,fVar12);
    pLVar6 = aLStack304;
    uVar4 = lib::L2CValue::operator_((L2CValue *)&local_200,pLVar6);
    lib::L2CValue::_L2CValue((L2CValue *)&local_200);
    lib::L2CValue::_L2CValue((L2CValue *)auStack400);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,90.0);
      lib::L2CAgent::math_rad((L2CAgent *)&local_70,pLVar6);
      puVar7 = &local_200;
      lib::L2CValue::operator_((L2CValue *)auStack384,(L2CValue *)puVar7);
      lib::L2CValue::_L2CValue((L2CValue *)&local_200);
      this_00 = &local_70;
    }
    else {
      lib::L2CAgent::math_abs((L2CAgent *)aLStack128,pLVar6);
      lib::L2CValue::L2CValue((L2CValue *)&local_200,0.001);
      uVar4 = lib::L2CValue::operator_((L2CValue *)&local_200,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_200);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar4 & 1) != 0) {
        bVar2 = app::lua_bind::PostureModule__set_stick_lr_impl(*ppBVar11,0.0);
        lib::L2CValue::L2CValue(aLStack464,(bool)(bVar2 & 1));
        lib::L2CValue::_L2CValue(aLStack464);
      }
      lib::L2CAgent::math_atan((L2CAgent *)auStack352,aLStack128,pLVar8);
      puVar7 = &local_200;
      lib::L2CValue::operator_((L2CValue *)auStack384,(L2CValue *)puVar7);
      this_00 = &local_200;
    }
    lib::L2CValue::_L2CValue((L2CValue *)this_00);
    lib::L2CAgent::math_cos((L2CAgent *)auStack384,(L2CValue *)puVar7);
    puVar7 = &local_200;
    lib::L2CValue::operator_((L2CValue *)auStack240,(L2CValue *)puVar7);
    lib::L2CValue::_L2CValue((L2CValue *)&local_200);
    lib::L2CAgent::math_sin((L2CAgent *)auStack384,(L2CValue *)puVar7);
    lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_200);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,0.001);
  uVar4 = lib::L2CValue::operator__((L2CValue *)&local_200,(L2CValue *)auStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_200,-0.001);
    uVar4 = lib::L2CValue::operator__((L2CValue *)auStack240,(L2CValue *)&local_200);
    lib::L2CValue::_L2CValue((L2CValue *)&local_200);
    if ((uVar4 & 1) == 0) goto LAB_7100011c98;
    lib::L2CValue::L2CValue((L2CValue *)&local_200,1.0);
    fVar12 = (float)lib::L2CValue::as_number((L2CValue *)&local_200);
    app::lua_bind::PostureModule__set_lr_impl(*ppBVar11,fVar12);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_200,-1.0);
    fVar12 = (float)lib::L2CValue::as_number((L2CValue *)&local_200);
    app::lua_bind::PostureModule__set_lr_impl(*ppBVar11,fVar12);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
LAB_7100011c98:
  app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar11);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,0.0);
  lib::L2CValue::operator_((L2CValue *)auStack240,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_200,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_STICK_X
            );
  fVar12 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_200);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,0.0);
  lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_200,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_STICK_Y
            );
  fVar12 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_200);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)auStack400,0xc1f61330d);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack400);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,fVar12);
  lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)auStack400);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_INT_QUICK_ATTACK_COUNT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,iVar3);
  lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,1);
  uVar4 = lib::L2CValue::operator__((L2CValue *)&local_200,aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack400,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack416,0xb22feca85);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack400);
    uVar5 = lib::L2CValue::as_integer(aLStack416);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar4,uVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar12);
    lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_70);
    lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_200);
    lib::L2CValue::_L2CValue((L2CValue *)&local_200);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue((L2CValue *)auStack400);
  }
  lib::L2CValue::operator_((L2CValue *)auStack240,aLStack304);
  lib::L2CValue::operator_((L2CValue *)auStack240,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::operator_(aLStack288,aLStack304);
  lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_200);
  app::sv_kinetic_energy::clear_speed_ex(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_200);
  app::lua_bind::KineticModule__unable_energy_impl(*ppBVar11,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_200);
  app::sv_kinetic_energy::clear_speed_ex(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_200);
  app::lua_bind::KineticModule__unable_energy_impl(*ppBVar11,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_200);
  app::sv_kinetic_energy::clear_speed_ex(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_200);
  app::lua_bind::KineticModule__unable_energy_impl(*ppBVar11,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_200);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack240);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_200);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack240);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
  app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
  lib::L2CValue::L2CValue((L2CValue *)auStack400,fVar12);
  lib::L2CValue::operator_((L2CValue *)auStack240,(L2CValue *)auStack400);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_200);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
  app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)auStack400);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_200);
  app::lua_bind::KineticModule__enable_energy_impl(*ppBVar11,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::L2CValue((L2CValue *)auStack400,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack416,0.0);
  lib::L2CValue::L2CValue(aLStack528,0.0);
  lib::L2CValue::L2CValue(aLStack544,0.0);
  HVar9 = lib::L2CValue::as_hash((L2CValue *)auStack400);
  uVar4 = lib::L2CValue::as_number(aLStack416);
  lVar18 = lib::L2CValue::as_number(aLStack528);
  uVar16 = lib::L2CValue::as_number(aLStack544);
  local_70 = (Hash40MapEntry **)(uVar4 & 0xffffffff | lVar18 << 0x20);
  plStack104 = (lua_State *)(ulong)uVar16;
  puVar10 = &local_70;
  app::lua_bind::ModelModule__joint_rotate_impl(*ppBVar11,HVar9,(Vector3f *)puVar10);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,(float)local_70);
  lib::L2CValue::L2CValue(aLStack496,local_70._4_4_);
  lib::L2CValue::L2CValue(aLStack480,plStack104._0_4_);
  lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_200);
  lib::L2CValue::operator_((L2CValue *)(auStack240 + 0x10),aLStack496);
  lib::L2CValue::operator_(aLStack272,aLStack480);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::_L2CValue(aLStack544);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue((L2CValue *)auStack400);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,1.0);
  lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,1.0);
  lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,1.0);
  puVar7 = &local_200;
  lib::L2CValue::operator_(aLStack192,(L2CValue *)puVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CAgent::math_abs((L2CAgent *)auStack240,(L2CValue *)puVar7);
  lib::L2CValue::operator_(aLStack416);
  pLVar6 = aLStack288;
  lib::L2CAgent::math_atan((L2CAgent *)auStack400,pLVar6,(L2CValue *)puVar10);
  lib::L2CAgent::math_deg((L2CAgent *)&local_70,pLVar6);
  lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)auStack400);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,0.0);
  lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_200,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_ROT_X);
  fVar12 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_200);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,0.0);
  lib::L2CValue::operator_((L2CValue *)(auStack240 + 0x10),(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_200,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_ROT_Y);
  fVar12 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_200);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,0.0);
  lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_200,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_ROT_Z);
  fVar12 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_200);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x31d39a761);
  HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_70);
  uVar4 = lib::L2CValue::as_number(aLStack144);
  lVar18 = lib::L2CValue::as_number((L2CValue *)(auStack240 + 0x10));
  uVar16 = lib::L2CValue::as_number(aLStack272);
  local_200 = uVar4 & 0xffffffff | lVar18 << 0x20;
  uStack504 = (ulong)uVar16;
  app::lua_bind::ModelModule__set_joint_rotate_impl(*ppBVar11,HVar9,(Vector3f *)&local_200,0,0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack384);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack384 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack352);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
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
  return;
}

