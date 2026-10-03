
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000ba40(L2CValue *param_1,L2CAgent *param_2)

{
  int iVar1;
  L2CValue *pLVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CAgent *pLVar8;
  Hash40 HVar9;
  undefined8 *this;
  L2CValue *pLVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  long lVar18;
  undefined auStack656 [16];
  undefined auStack640 [32];
  undefined auStack608 [32];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  undefined local_1f0 [32];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  undefined8 auStack400 [2];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  undefined auStack320 [16];
  undefined auStack304 [16];
  undefined auStack288 [32];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  undefined8 local_a0;
  lua_State *plStack152;
  
  lib::L2CValue::L2CValue(aLStack176,12.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x18cdc1683);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x1fbdb2615);
  fVar12 = (float)app::lua_bind::ControlModule__get_stick_x_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)local_1f0,fVar12);
  fVar12 = (float)app::lua_bind::ControlModule__get_stick_y_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack224,fVar12);
  lib::L2CValue::operator=(pLVar2,(L2CValue *)local_1f0);
  lib::L2CValue::operator=(pLVar3,aLStack224);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x18cdc1683);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x1fbdb2615);
  fVar12 = (float)lib::L2CValue::as_number(pLVar2);
  fVar13 = (float)lib::L2CValue::as_number(pLVar3);
  fVar12 = (float)app::sv_math::vec2_length_square(fVar12,fVar13);
  lib::L2CValue::L2CValue(aLStack224,fVar12);
  lib::L2CValue::L2CValue((L2CValue *)local_1f0,0.0);
  uVar4 = lib::L2CValue::operator==(aLStack224,(L2CValue *)local_1f0);
  lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
  if ((uVar4 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)local_1f0,0.0);
    uVar4 = lib::L2CValue::operator==(pLVar2,(L2CValue *)local_1f0);
    lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack224);
LAB_710000bc44:
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x10,(L2CValue)0x0);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack288 + 0x10),_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar1 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
      uVar17 = app::lua_bind::KineticModule__get_sum_speed_impl(param_2->moduleAccessor,iVar1);
      lib::L2CValue::L2CValue((L2CValue *)local_1f0,(float)uVar17);
      pLVar2 = (L2CValue *)(local_1f0 + 0x10);
      lib::L2CValue::L2CValue(pLVar2,(float)((ulong)uVar17 >> 0x20));
      lib::L2CValue::operator=(pLVar3,(L2CValue *)local_1f0);
      lib::L2CValue::operator=(pLVar5,pLVar2);
      lib::L2CValue::~L2CValue(pLVar2);
      lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
      pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
      fVar12 = (float)lib::L2CValue::as_number(pLVar2);
      fVar13 = (float)lib::L2CValue::as_number(pLVar3);
      fVar12 = (float)app::sv_math::vec2_length(fVar12,fVar13);
      lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),fVar12);
      lib::L2CValue::L2CValue((L2CValue *)auStack304,0x1086bc4a93);
      lib::L2CValue::L2CValue((L2CValue *)auStack320,0x18005eb3c5);
      pLVar2 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack304);
      pLVar3 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack320);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (param_2->moduleAccessor,(ulong)pLVar2,(ulong)pLVar3);
      lib::L2CValue::L2CValue((L2CValue *)local_1f0,fVar12);
      lib::L2CAgent::math_rad((L2CAgent *)local_1f0,pLVar2);
      lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack320);
      lib::L2CValue::~L2CValue((L2CValue *)auStack304);
      pLVar8 = (L2CAgent *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
      pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
      lib::L2CAgent::math_atan(pLVar8,pLVar2,pLVar3);
      pLVar8 = (L2CAgent *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x18cdc1683);
      pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x1fbdb2615);
      lib::L2CAgent::math_atan(pLVar8,pLVar2,pLVar3);
      lib::L2CValue::operator-((L2CValue *)auStack304,(L2CValue *)auStack320);
      uVar4 = lib::L2CValue::operator<
                        ((L2CValue *)&FIGHTER_STATUS_AIR_LASSO_HANG_WORK_FLOAT_BODY_OFFSET,
                         (L2CValue *)local_1f0);
      lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_1f0,2.0);
        lib::L2CValue::operator*
                  ((L2CValue *)&FIGHTER_STATUS_AIR_LASSO_HANG_WORK_FLOAT_BODY_OFFSET,
                   (L2CValue *)local_1f0);
        lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
        lib::L2CValue::operator-((L2CValue *)auStack304,aLStack352);
        lib::L2CValue::operator=((L2CValue *)auStack304,aLStack336);
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::~L2CValue(aLStack352);
      }
      lib::L2CValue::operator-((L2CValue *)auStack320,(L2CValue *)auStack304);
      uVar4 = lib::L2CValue::operator<
                        ((L2CValue *)&FIGHTER_STATUS_AIR_LASSO_HANG_WORK_FLOAT_BODY_OFFSET,
                         (L2CValue *)local_1f0);
      lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_1f0,2.0);
        lib::L2CValue::operator*
                  ((L2CValue *)&FIGHTER_STATUS_AIR_LASSO_HANG_WORK_FLOAT_BODY_OFFSET,
                   (L2CValue *)local_1f0);
        lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
        lib::L2CValue::operator-((L2CValue *)auStack320,aLStack352);
        lib::L2CValue::operator=((L2CValue *)auStack320,aLStack336);
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::~L2CValue(aLStack352);
      }
      uVar4 = lib::L2CValue::operator<((L2CValue *)auStack320,(L2CValue *)auStack304);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::operator+((L2CValue *)auStack304,(L2CValue *)auStack288);
        lib::L2CValue::operator=((L2CValue *)auStack304,(L2CValue *)local_1f0);
        lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
        pLVar2 = (L2CValue *)auStack304;
        uVar4 = lib::L2CValue::operator<((L2CValue *)auStack320,pLVar2);
        if ((uVar4 & 1) != 0) {
          pLVar2 = (L2CValue *)auStack320;
          lib::L2CValue::operator=((L2CValue *)auStack304,pLVar2);
        }
      }
      else {
        lib::L2CValue::operator-((L2CValue *)auStack304,(L2CValue *)auStack288);
        lib::L2CValue::operator=((L2CValue *)auStack304,(L2CValue *)local_1f0);
        lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
        pLVar2 = (L2CValue *)auStack320;
        uVar4 = lib::L2CValue::operator<((L2CValue *)auStack304,pLVar2);
        if ((uVar4 & 1) != 0) {
          pLVar2 = (L2CValue *)auStack320;
          lib::L2CValue::operator=((L2CValue *)auStack304,pLVar2);
        }
      }
      lib::L2CAgent::math_sin((L2CAgent *)auStack304,pLVar2);
      lib::L2CValue::operator*(aLStack336,(L2CValue *)(auStack288 + 0x10));
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
      pLVar2 = (L2CValue *)local_1f0;
      lib::L2CValue::operator=(pLVar3,pLVar2);
      lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CAgent::math_cos((L2CAgent *)auStack304,pLVar2);
      lib::L2CValue::operator*(aLStack336,(L2CValue *)(auStack288 + 0x10));
      pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
      lib::L2CValue::operator=(pLVar2,(L2CValue *)local_1f0);
      lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::L2CValue((L2CValue *)local_1f0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)local_1f0);
      lib::L2CAgent::push_lua_stack(param_2,pLVar2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack336);
      app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
      lib::L2CValue::L2CValue((L2CValue *)local_1f0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)local_1f0);
      lib::L2CAgent::push_lua_stack(param_2,pLVar2);
      app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
      lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack320);
      lib::L2CValue::~L2CValue((L2CValue *)auStack304);
      lib::L2CValue::~L2CValue((L2CValue *)auStack288);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
      goto LAB_710000c18c;
    }
    pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)local_1f0,0.0);
    uVar4 = lib::L2CValue::operator<(pLVar2,(L2CValue *)local_1f0);
    lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
    lib::L2CValue::~L2CValue(aLStack224);
    if ((uVar4 & 1) == 0) goto LAB_710000bc44;
  }
  else {
LAB_710000c18c:
    lib::L2CValue::~L2CValue(aLStack224);
  }
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue(aLStack368,0.0);
  lib::L2CValue::L2CValue(aLStack384,0.0);
  pLVar2 = aLStack384;
  lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x90,SUB81(pLVar2,0));
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack368);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  uVar17 = app::lua_bind::KineticModule__get_sum_speed_impl(param_2->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)local_1f0,(float)uVar17);
  pLVar3 = (L2CValue *)(local_1f0 + 0x10);
  lib::L2CValue::L2CValue(pLVar3,(float)((ulong)uVar17 >> 0x20));
  lib::L2CValue::operator=(pLVar5,(L2CValue *)local_1f0);
  lib::L2CValue::operator=(pLVar6,pLVar3);
  lib::L2CValue::~L2CValue(pLVar3);
  lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
  fVar12 = (float)lib::L2CValue::as_number(pLVar3);
  fVar13 = (float)lib::L2CValue::as_number(pLVar7);
  uVar17 = app::sv_math::vec2_normalize(fVar12,fVar13);
  lib::L2CValue::L2CValue((L2CValue *)local_1f0,(float)uVar17);
  pLVar3 = (L2CValue *)(local_1f0 + 0x10);
  lib::L2CValue::L2CValue(pLVar3,(float)((ulong)uVar17 >> 0x20));
  lib::L2CValue::operator=(pLVar5,(L2CValue *)local_1f0);
  lib::L2CValue::operator=(pLVar6,pLVar3);
  lib::L2CValue::~L2CValue(pLVar3);
  lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
  fVar12 = (float)app::lua_bind::PostureModule__lr_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),fVar12);
  pLVar8 = (L2CAgent *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
  lib::L2CAgent::math_atan(pLVar8,pLVar3,pLVar2);
  lib::L2CAgent::math_deg((L2CAgent *)&local_a0,pLVar3);
  lib::L2CValue::operator*((L2CValue *)local_1f0,(L2CValue *)(auStack288 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue((L2CValue *)local_1f0,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_WORK_FLOAT_ANGLE_X)
  ;
  pLVar2 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)local_1f0);
  fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,(int)pLVar2);
  lib::L2CValue::L2CValue((L2CValue *)auStack304,fVar12);
  lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
  lib::L2CAgent::math_abs((L2CAgent *)auStack304,pLVar2);
  lib::L2CAgent::math_abs((L2CAgent *)auStack288,pLVar2);
  lib::L2CValue::operator-((L2CValue *)local_1f0,(L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
  HVar9 = app::lua_bind::MotionModule__motion_kind_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,HVar9);
  lib::L2CValue::L2CValue((L2CValue *)local_1f0,0x13e5efd33f);
  uVar4 = lib::L2CValue::operator==((L2CValue *)&local_a0,(L2CValue *)local_1f0);
  lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
  if ((uVar4 & 1) == 0) {
    this = &local_a0;
LAB_710000c55c:
    lib::L2CValue::~L2CValue((L2CValue *)this);
  }
  else {
    fVar12 = (float)app::lua_bind::MotionModule__frame_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack336,fVar12);
    lib::L2CValue::L2CValue((L2CValue *)local_1f0,1.0);
    pLVar2 = aLStack336;
    uVar4 = lib::L2CValue::operator<((L2CValue *)local_1f0,pLVar2);
    lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    if ((uVar4 & 1) != 0) {
      lib::L2CAgent::math_abs((L2CAgent *)auStack320,pLVar2);
      uVar4 = lib::L2CValue::operator<(aLStack176,(L2CValue *)local_1f0);
      lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack400,(L2CValue *)auStack288);
        lua2cpp::L2CFighterBase::sign(param_2,(L2CValue)0x70);
        lib::L2CValue::operator*(aLStack176,aLStack336);
        lib::L2CValue::operator+((L2CValue *)auStack304,(L2CValue *)&local_a0);
        lib::L2CValue::operator=((L2CValue *)auStack288,(L2CValue *)local_1f0);
        lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
        lib::L2CValue::~L2CValue(aLStack336);
        this = auStack400;
        goto LAB_710000c55c;
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack336,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack416,0.0);
  lib::L2CValue::L2CValue(aLStack432,0.0);
  lib::L2CValue::L2CValue(aLStack448,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_2,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue(aLStack416);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x162d277af);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x18cdc1683);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x1fbdb2615);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x162d277af);
  HVar9 = lib::L2CValue::as_hash(aLStack336);
  uVar4 = lib::L2CValue::as_number(pLVar2);
  lVar18 = lib::L2CValue::as_number(pLVar7);
  uVar14 = lib::L2CValue::as_number(pLVar10);
  local_a0 = (void **)(uVar4 & 0xffffffff | lVar18 << 0x20);
  plStack152 = (lua_State *)(ulong)uVar14;
  app::lua_bind::ModelModule__joint_rotate_impl(param_2->moduleAccessor,HVar9,(Vector3f *)&local_a0)
  ;
  lib::L2CValue::L2CValue((L2CValue *)local_1f0,(float)local_a0);
  pLVar2 = (L2CValue *)(local_1f0 + 0x10);
  lib::L2CValue::L2CValue(pLVar2,local_a0._4_4_);
  lib::L2CValue::L2CValue(aLStack464,plStack152._0_4_);
  lib::L2CValue::operator=(pLVar3,(L2CValue *)local_1f0);
  lib::L2CValue::operator=(pLVar5,pLVar2);
  lib::L2CValue::operator=(pLVar6,aLStack464);
  lib::L2CValue::~L2CValue(aLStack464);
  lib::L2CValue::~L2CValue(pLVar2);
  lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
  lib::L2CValue::L2CValue(aLStack512,0.0);
  lib::L2CValue::L2CValue(aLStack528,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x0,(L2CValue)0xf0);
  lib::L2CValue::~L2CValue(aLStack528);
  lib::L2CValue::~L2CValue(aLStack512);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack544,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar1 = lib::L2CValue::as_integer(aLStack544);
  uVar17 = app::lua_bind::KineticModule__get_sum_speed_impl(param_2->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)local_1f0,(float)uVar17);
  pLVar2 = (L2CValue *)(local_1f0 + 0x10);
  lib::L2CValue::L2CValue(pLVar2,(float)((ulong)uVar17 >> 0x20));
  lib::L2CValue::operator=(pLVar3,(L2CValue *)local_1f0);
  lib::L2CValue::operator=(pLVar5,pLVar2);
  lib::L2CValue::~L2CValue(pLVar2);
  lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
  lib::L2CValue::~L2CValue(aLStack544);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x18cdc1683);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x1fbdb2615);
  fVar12 = (float)lib::L2CValue::as_number(pLVar2);
  fVar13 = (float)lib::L2CValue::as_number(pLVar3);
  fVar12 = (float)app::sv_math::vec2_length_square(fVar12,fVar13);
  lib::L2CValue::L2CValue(aLStack544,fVar12);
  lib::L2CValue::L2CValue((L2CValue *)local_1f0,1.63);
  uVar4 = lib::L2CValue::operator<(aLStack544,(L2CValue *)local_1f0);
  lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
  lib::L2CValue::~L2CValue(aLStack544);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack544,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_WORK_FLOAT_ANGLE_X);
    iVar1 = lib::L2CValue::as_integer(aLStack544);
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)local_1f0,fVar12);
    lib::L2CValue::operator=((L2CValue *)auStack288,(L2CValue *)local_1f0);
    lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
    lib::L2CValue::~L2CValue(aLStack544);
  }
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x18cdc1683);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x1fbdb2615);
  fVar12 = (float)lib::L2CValue::as_number(pLVar2);
  fVar13 = (float)lib::L2CValue::as_number(pLVar3);
  fVar12 = (float)app::sv_math::vec2_length(fVar12,fVar13);
  lib::L2CValue::L2CValue(aLStack544,fVar12);
  lib::L2CValue::L2CValue((L2CValue *)local_1f0,0.001);
  uVar4 = lib::L2CValue::operator<((L2CValue *)local_1f0,aLStack544);
  lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
  lib::L2CValue::~L2CValue(aLStack544);
  if ((uVar4 & 1) == 0) goto LAB_710000ccbc;
  lib::L2CValue::L2CValue(aLStack560,0.0);
  lib::L2CValue::L2CValue(aLStack576,-1.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0xd0,(L2CValue)0xc0);
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::~L2CValue(aLStack560);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x1fbdb2615);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x18cdc1683);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x1fbdb2615);
  fVar12 = (float)lib::L2CValue::as_number(pLVar2);
  fVar13 = (float)lib::L2CValue::as_number(pLVar6);
  uVar17 = app::sv_math::vec2_normalize(fVar12,fVar13);
  lib::L2CValue::L2CValue((L2CValue *)local_1f0,(float)uVar17);
  pLVar2 = (L2CValue *)(local_1f0 + 0x10);
  lib::L2CValue::L2CValue(pLVar2,(float)((ulong)uVar17 >> 0x20));
  lib::L2CValue::operator=(pLVar3,(L2CValue *)local_1f0);
  lib::L2CValue::operator=(pLVar5,pLVar2);
  lib::L2CValue::~L2CValue(pLVar2);
  lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x18cdc1683);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack544,0x18cdc1683);
  pLVar7 = (L2CValue *)0x1fbdb2615;
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack544,0x1fbdb2615);
  fVar12 = (float)lib::L2CValue::as_number(pLVar2);
  fVar13 = (float)lib::L2CValue::as_number(pLVar3);
  fVar15 = (float)lib::L2CValue::as_number(pLVar5);
  fVar16 = (float)lib::L2CValue::as_number(pLVar6);
  fVar12 = (float)app::sv_math::vec2_dot(fVar12,fVar13,fVar15,fVar16);
  lib::L2CValue::L2CValue((L2CValue *)auStack656,fVar12);
  lib::L2CAgent::math_acos((L2CAgent *)auStack656,pLVar7);
  lib::L2CAgent::math_deg((L2CAgent *)auStack640,pLVar7);
  lib::L2CValue::L2CValue((L2CValue *)local_1f0,180.0);
  pLVar2 = (L2CValue *)(auStack640 + 0x10);
  lib::L2CValue::operator-((L2CValue *)local_1f0,pLVar2);
  lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
  lib::L2CAgent::math_abs((L2CAgent *)auStack608,pLVar2);
  lib::L2CValue::~L2CValue((L2CValue *)auStack608);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack640 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack640);
  lib::L2CValue::~L2CValue((L2CValue *)auStack656);
  lib::L2CValue::L2CValue((L2CValue *)(auStack640 + 0x10),0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)auStack640,0x1d5fbe5050);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack640 + 0x10));
  uVar11 = lib::L2CValue::as_integer((L2CValue *)auStack640);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (param_2->moduleAccessor,uVar4,uVar11);
  lib::L2CValue::L2CValue((L2CValue *)auStack608,fVar12);
  uVar4 = lib::L2CValue::operator<((L2CValue *)auStack608,(L2CValue *)(auStack608 + 0x10));
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::~L2CValue((L2CValue *)auStack608);
    lib::L2CValue::~L2CValue((L2CValue *)auStack640);
    pLVar2 = (L2CValue *)(auStack640 + 0x10);
LAB_710000cca8:
    lib::L2CValue::~L2CValue(pLVar2);
  }
  else {
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)local_1f0,0.0001);
    uVar4 = lib::L2CValue::operator<(pLVar2,(L2CValue *)local_1f0);
    lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack608);
    lib::L2CValue::~L2CValue((L2CValue *)auStack640);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack640 + 0x10));
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack608,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_WORK_FLOAT_ANGLE_X);
      iVar1 = lib::L2CValue::as_integer((L2CValue *)auStack608);
      fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar1);
      lib::L2CValue::L2CValue((L2CValue *)local_1f0,fVar12);
      lib::L2CValue::operator=((L2CValue *)auStack288,(L2CValue *)local_1f0);
      lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
      pLVar2 = (L2CValue *)auStack608;
      goto LAB_710000cca8;
    }
  }
  lib::L2CValue::~L2CValue((L2CValue *)(auStack608 + 0x10));
  lib::L2CValue::~L2CValue(aLStack544);
LAB_710000ccbc:
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x162d277af);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x18cdc1683);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x1fbdb2615);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x162d277af);
  HVar9 = lib::L2CValue::as_hash(aLStack336);
  uVar4 = lib::L2CValue::as_number(pLVar2);
  lVar18 = lib::L2CValue::as_number(pLVar7);
  uVar14 = lib::L2CValue::as_number(pLVar10);
  local_a0 = (void **)(uVar4 & 0xffffffff | lVar18 << 0x20);
  plStack152 = (lua_State *)(ulong)uVar14;
  app::lua_bind::ModelModule__joint_rotate_impl(param_2->moduleAccessor,HVar9,(Vector3f *)&local_a0)
  ;
  lib::L2CValue::L2CValue((L2CValue *)local_1f0,(float)local_a0);
  pLVar2 = (L2CValue *)(local_1f0 + 0x10);
  lib::L2CValue::L2CValue(pLVar2,local_a0._4_4_);
  lib::L2CValue::L2CValue(aLStack464,plStack152._0_4_);
  lib::L2CValue::operator=(pLVar3,(L2CValue *)local_1f0);
  lib::L2CValue::operator=(pLVar5,pLVar2);
  lib::L2CValue::operator=(pLVar6,aLStack464);
  lib::L2CValue::~L2CValue(aLStack464);
  lib::L2CValue::~L2CValue(pLVar2);
  lib::L2CValue::~L2CValue((L2CValue *)local_1f0);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x18cdc1683);
  lib::L2CValue::operator=(pLVar2,(L2CValue *)auStack288);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x18cdc1683);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x162d277af);
  HVar9 = lib::L2CValue::as_hash(aLStack336);
  uVar4 = lib::L2CValue::as_number(pLVar2);
  lVar18 = lib::L2CValue::as_number(pLVar3);
  uVar14 = lib::L2CValue::as_number(pLVar5);
  local_1f0._0_8_ = (void **)(uVar4 & 0xffffffff | lVar18 << 0x20);
  local_1f0._8_8_ = (lua_State *)(ulong)uVar14;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (param_2->moduleAccessor,HVar9,(Vector3f *)local_1f0,0,0);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x18cdc1683);
  lib::L2CValue::L2CValue(param_1,pLVar2);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue((L2CValue *)auStack320);
  lib::L2CValue::~L2CValue((L2CValue *)auStack304);
  lib::L2CValue::~L2CValue((L2CValue *)auStack288);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack176);
  return;
}

