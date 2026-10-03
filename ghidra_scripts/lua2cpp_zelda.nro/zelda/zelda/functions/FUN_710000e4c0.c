
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000e4c0(L2CAgent *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  GroundTouchID GVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CAgent *pLVar10;
  ulong uVar11;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *pLVar12;
  void *pvVar13;
  GroundCollisionLine *pGVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float in_register_00005008;
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  undefined auStack544 [32];
  L2CValue aLStack512 [16];
  undefined auStack496 [32];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_ZELDA_STATUS_SPECIAL_HI_FLAG_CHECK_GROUND);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  if ((bVar2 & 1U) == 0) {
    return;
  }
  bVar1 = app::lua_bind::GroundModule__is_attach_cliff_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((bVar2 & 1U) != 0) {
    return;
  }
  lib::L2CValue::L2CValue(aLStack176,_GROUND_TOUCH_ID_NONE);
  lib::L2CValue::L2CValue(aLStack192,_GROUND_TOUCH_FLAG_NONE);
  lib::L2CValue::L2CValue(aLStack160,GROUND_TOUCH_FLAG_RIGHT);
  uVar4 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(param_1->moduleAccessor,uVar4);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack160,_GROUND_TOUCH_FLAG_LEFT);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(param_1->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack144,_GROUND_TOUCH_FLAG_LEFT);
      lib::L2CValue::operator=(aLStack192,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,_GROUND_TOUCH_ID_LEFT);
      lib::L2CValue::operator=(aLStack176,aLStack144);
      goto LAB_710000e7ac;
    }
    lib::L2CValue::L2CValue(aLStack160,_GROUND_TOUCH_FLAG_UP);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(param_1->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack144,_GROUND_TOUCH_FLAG_UP);
      lib::L2CValue::operator=(aLStack192,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,_GROUND_TOUCH_ID_UP);
      lib::L2CValue::operator=(aLStack176,aLStack144);
      goto LAB_710000e7ac;
    }
    lib::L2CValue::L2CValue(aLStack160,GROUND_TOUCH_FLAG_DOWN);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(param_1->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack144,GROUND_TOUCH_FLAG_DOWN);
      lib::L2CValue::operator=(aLStack192,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,_GROUND_TOUCH_ID_DOWN);
      lib::L2CValue::operator=(aLStack176,aLStack144);
      goto LAB_710000e7ac;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,GROUND_TOUCH_FLAG_RIGHT);
    lib::L2CValue::operator=(aLStack192,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,_GROUND_TOUCH_ID_RIGHT);
    lib::L2CValue::operator=(aLStack176,aLStack144);
LAB_710000e7ac:
    lib::L2CValue::~L2CValue(aLStack144);
  }
  lib::L2CValue::L2CValue(aLStack144,_GROUND_TOUCH_FLAG_NONE);
  uVar6 = lib::L2CValue::operator==(aLStack192,aLStack144);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar6 & 1) != 0) goto LAB_710000f40c;
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack144);
  uVar21 = app::sv_kinetic_energy::get_speed3f(param_1->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack256,(float)uVar21);
  lib::L2CValue::L2CValue(aLStack240,(float)((ulong)uVar21 >> 0x20));
  lib::L2CValue::L2CValue(aLStack224,in_register_00005008);
  FUN_710000bf50(aLStack208,param_1,aLStack256);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack144);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x162d277af);
  fVar15 = (float)lib::L2CValue::as_number(pLVar7);
  fVar16 = (float)lib::L2CValue::as_number(pLVar8);
  fVar17 = (float)lib::L2CValue::as_number(pLVar9);
  fVar15 = (float)app::sv_math::vec3_length(fVar15,fVar16,fVar17);
  lib::L2CValue::L2CValue(aLStack272,fVar15);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  uVar6 = lib::L2CValue::operator<(aLStack144,aLStack272);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar6 & 1) != 0) {
    uVar4 = lib::L2CValue::as_integer(aLStack192);
    uVar21 = app::lua_bind::GroundModule__get_touch_normal_impl(param_1->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue(aLStack320,(float)uVar21);
    lib::L2CValue::L2CValue(aLStack304,(float)((ulong)uVar21 >> 0x20));
    lib::L2CValue::L2CValue(aLStack144,aLStack320);
    lib::L2CValue::L2CValue(aLStack160,aLStack304);
    lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x70,(L2CValue)0x60);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack320);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack352,pLVar7);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack368,pLVar7);
    lib::L2CValue::L2CValue(aLStack384,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack416,0.0);
    lib::L2CValue::L2CValue(aLStack432,0.0);
    lib::L2CValue::L2CValue(aLStack448,1.0);
    lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
    pLVar7 = aLStack400;
    lua2cpp::L2CFighterBase::Vector3__cross(param_1,(L2CValue)0xb0,SUB81(pLVar7,0));
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack448);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::operator/(aLStack144,aLStack272);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::operator*(aLStack208,aLStack464);
    lib::L2CValue::operator=(aLStack208,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue((L2CValue *)(auStack496 + 0x10),0.0);
    lib::L2CValue::L2CValue(aLStack144,GROUND_TOUCH_FLAG_DOWN);
    uVar6 = lib::L2CValue::operator==(aLStack192,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar6 & 1) == 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      uVar6 = lib::L2CValue::operator<(aLStack144,pLVar8);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((uVar6 & 1) == 0) goto LAB_710000ed58;
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      uVar6 = lib::L2CValue::operator<(pLVar8,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack144,-1.0);
        lib::L2CValue::operator=((L2CValue *)(auStack496 + 0x10),aLStack144);
        lib::L2CValue::~L2CValue(aLStack144);
      }
      pLVar10 = (L2CAgent *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
      lib::L2CAgent::math_atan(pLVar10,pLVar8,pLVar7);
      lib::L2CAgent::math_deg((L2CAgent *)auStack496,pLVar8);
      lib::L2CAgent::math_abs((L2CAgent *)aLStack144,pLVar8);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,180.0);
      pLVar7 = aLStack512;
      lib::L2CValue::operator-(aLStack144,pLVar7);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CAgent::math_abs((L2CAgent *)auStack544,pLVar7);
      lib::L2CValue::~L2CValue((L2CValue *)auStack544);
      lib::L2CValue::L2CValue((L2CValue *)auStack544,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack560,0x158bb5418d);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack544);
      uVar11 = lib::L2CValue::as_integer(aLStack560);
      fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (param_1->moduleAccessor,uVar6,uVar11);
      lib::L2CValue::L2CValue(aLStack144,fVar15);
      lib::L2CValue::~L2CValue(aLStack560);
      lib::L2CValue::~L2CValue((L2CValue *)auStack544);
      uVar6 = lib::L2CValue::operator<=((L2CValue *)(auStack544 + 0x10),aLStack144);
      if ((uVar6 & 1) != 0) {
        pLVar7 = (L2CValue *)0x18cdc1683;
        pLVar10 = (L2CAgent *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
        lib::L2CAgent::math_abs(pLVar10,pLVar7);
        lib::L2CValue::operator=(aLStack272,(L2CValue *)auStack544);
        lib::L2CValue::~L2CValue((L2CValue *)auStack544);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
        lib::L2CValue::L2CValue(aLStack576,pLVar7);
        lua2cpp::L2CFighterBase::sign(param_1,(L2CValue)0xc0);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
        lib::L2CValue::operator=(pLVar7,(L2CValue *)auStack544);
        lib::L2CValue::~L2CValue((L2CValue *)auStack544);
        lib::L2CValue::~L2CValue(aLStack576);
      }
LAB_710000f0d4:
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack544 + 0x10));
      lib::L2CValue::~L2CValue(aLStack512);
      lib::L2CValue::~L2CValue((L2CValue *)auStack496);
    }
    else {
LAB_710000ed58:
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
      pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
      this = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
      this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x162d277af);
      fVar15 = (float)lib::L2CValue::as_number(pLVar7);
      fVar16 = (float)lib::L2CValue::as_number(pLVar8);
      fVar17 = (float)lib::L2CValue::as_number(pLVar9);
      fVar18 = (float)lib::L2CValue::as_number(pLVar12);
      fVar19 = (float)lib::L2CValue::as_number(this);
      fVar20 = (float)lib::L2CValue::as_number(this_00);
      fVar15 = (float)app::sv_math::vec3_dot(fVar15,fVar16,fVar17,fVar18,fVar19,fVar20);
      lib::L2CValue::L2CValue(aLStack144,fVar15);
      lib::L2CValue::operator=((L2CValue *)(auStack496 + 0x10),aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,-1e-05);
      uVar6 = lib::L2CValue::operator<=(aLStack144,(L2CValue *)(auStack496 + 0x10));
      lib::L2CValue::~L2CValue(aLStack144);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack144,1e-05);
        uVar6 = lib::L2CValue::operator<=((L2CValue *)(auStack496 + 0x10),aLStack144);
        lib::L2CValue::~L2CValue(aLStack144);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack144,GROUND_TOUCH_FLAG_RIGHT);
          uVar6 = lib::L2CValue::operator==(aLStack192,aLStack144);
          lib::L2CValue::~L2CValue(aLStack144);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack144,_GROUND_TOUCH_FLAG_LEFT);
            uVar6 = lib::L2CValue::operator==(aLStack192,aLStack144);
            lib::L2CValue::~L2CValue(aLStack144);
            if ((uVar6 & 1) == 0) {
              pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
              pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
              pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
              fVar15 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
              lib::L2CValue::L2CValue((L2CValue *)auStack496,fVar15);
              lib::L2CValue::L2CValue(aLStack512,0.0);
              lib::L2CValue::L2CValue((L2CValue *)(auStack544 + 0x10),0.0);
              fVar15 = (float)lib::L2CValue::as_number(pLVar7);
              fVar16 = (float)lib::L2CValue::as_number(pLVar8);
              fVar17 = (float)lib::L2CValue::as_number(pLVar9);
              fVar18 = (float)lib::L2CValue::as_number((L2CValue *)auStack496);
              fVar19 = (float)lib::L2CValue::as_number(aLStack512);
              fVar20 = (float)lib::L2CValue::as_number((L2CValue *)(auStack544 + 0x10));
              fVar15 = (float)app::sv_math::vec3_dot(fVar15,fVar16,fVar17,fVar18,fVar19,fVar20);
              lib::L2CValue::L2CValue(aLStack144,fVar15);
              lib::L2CValue::operator=((L2CValue *)(auStack496 + 0x10),aLStack144);
              goto LAB_710000f0d4;
            }
          }
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
          lib::L2CValue::L2CValue((L2CValue *)auStack496,0.0);
          lib::L2CValue::L2CValue(aLStack512,1.0);
          lib::L2CValue::L2CValue((L2CValue *)(auStack544 + 0x10),0.0);
          fVar15 = (float)lib::L2CValue::as_number(pLVar7);
          fVar16 = (float)lib::L2CValue::as_number(pLVar8);
          fVar17 = (float)lib::L2CValue::as_number(pLVar9);
          fVar18 = (float)lib::L2CValue::as_number((L2CValue *)auStack496);
          fVar19 = (float)lib::L2CValue::as_number(aLStack512);
          fVar20 = (float)lib::L2CValue::as_number((L2CValue *)(auStack544 + 0x10));
          fVar15 = (float)app::sv_math::vec3_dot(fVar15,fVar16,fVar17,fVar18,fVar19,fVar20);
          lib::L2CValue::L2CValue(aLStack144,fVar15);
          lib::L2CValue::operator=((L2CValue *)(auStack496 + 0x10),aLStack144);
          goto LAB_710000f0d4;
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack144,0.0);
    uVar6 = lib::L2CValue::operator<((L2CValue *)(auStack496 + 0x10),aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar6 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
      pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
      lib::L2CValue::L2CValue(aLStack144,-1.0);
      lib::L2CValue::operator*(pLVar12,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack144,-1.0);
      lib::L2CValue::operator*(pLVar12,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
      lib::L2CValue::L2CValue(aLStack144,-1.0);
      lib::L2CValue::operator*(pLVar12,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::operator=(pLVar7,(L2CValue *)auStack496);
      lib::L2CValue::operator=(pLVar8,aLStack512);
      lib::L2CValue::operator=(pLVar9,(L2CValue *)(auStack544 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)(auStack544 + 0x10));
      lib::L2CValue::~L2CValue(aLStack512);
      lib::L2CValue::~L2CValue((L2CValue *)auStack496);
    }
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
    lib::L2CValue::operator*(pLVar7,aLStack272);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
    lib::L2CValue::operator*(pLVar7,aLStack272);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
    lib::L2CValue::operator*(pLVar7,aLStack272);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack496);
    lib::L2CAgent::push_lua_stack(param_1,aLStack512);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)(auStack544 + 0x10));
    app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack544 + 0x10));
    lib::L2CValue::~L2CValue(aLStack512);
    lib::L2CValue::~L2CValue((L2CValue *)auStack496);
    lib::L2CValue::~L2CValue(aLStack144);
    iVar3 = app::lua_bind::StatusModule__situation_kind_impl(param_1->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)auStack496,iVar3);
    lib::L2CValue::L2CValue(aLStack144,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator==((L2CValue *)auStack496,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue((L2CValue *)auStack496);
    if ((uVar6 & 1) != 0) {
      GVar5 = lib::L2CValue::as_integer(aLStack176);
      pvVar13 = (void *)app::lua_bind::GroundModule__get_touch_line_raw_impl
                                  (param_1->moduleAccessor,GVar5);
      if (pvVar13 == (void *)0x0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack496,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)auStack496,pvVar13);
      }
      pGVar14 = (GroundCollisionLine *)lib::L2CValue::as_pointer((L2CValue *)auStack496);
      bVar1 = app::sv_ground_collision_line::is_floor(pGVar14);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::GroundModule__set_attach_ground_impl(param_1->moduleAccessor,(bool)(bVar1 & 1))
      ;
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue((L2CValue *)auStack496);
    }
    lib::L2CValue::~L2CValue((L2CValue *)(auStack496 + 0x10));
    lib::L2CValue::~L2CValue(aLStack464);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack288);
  }
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack208);
LAB_710000f40c:
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  return;
}

