
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000335c0(L2CValue *param_1,void *param_2,L2CValue *param_3,L2CValue *param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  GroundCollisionLine *pGVar7;
  BattleObjectModuleAccessor *pBVar8;
  L2CValue *pLVar9;
  Article *pAVar10;
  Rhombus2 *pRVar11;
  L2CValue *pLVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  L2CValue aLStack880 [16];
  L2CValue aLStack864 [16];
  L2CValue aLStack848 [16];
  L2CValue aLStack832 [16];
  L2CValue aLStack816 [16];
  L2CValue aLStack800 [16];
  L2CValue aLStack784 [16];
  L2CValue aLStack768 [16];
  L2CValue aLStack752 [16];
  L2CValue aLStack736 [16];
  L2CValue aLStack720 [16];
  L2CValue aLStack704 [16];
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  undefined auStack592 [32];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  undefined auStack416 [32];
  undefined auStack384 [32];
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
  undefined8 local_a0;
  lua_State *plStack152;
  
  lib::L2CValue::L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack336,param_3);
  lib::L2CValue::L2CValue(aLStack352,param_4);
  pLVar12 = aLStack336;
  FUN_71000375c0(aLStack320,param_2,pLVar12,aLStack352);
  lib::L2CValue::operator=(aLStack176,aLStack320);
  lib::L2CValue::operator=(aLStack192,aLStack304);
  lib::L2CValue::operator=(aLStack208,aLStack288);
  lib::L2CValue::operator=(aLStack224,aLStack272);
  lib::L2CValue::operator=(aLStack240,aLStack256);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  uVar5 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(param_1,false);
    lib::L2CValue::L2CValue(param_1 + 0x10,0);
    lib::L2CValue::L2CValue(param_1 + 0x20,0);
    lib::L2CValue::L2CValue(param_1 + 0x30,0);
    lib::L2CValue::L2CValue(param_1 + 0x40,0);
    goto LAB_7100034a34;
  }
  uVar3 = lib::L2CValue::as_integer(param_3);
  bVar1 = app::sv_battle_object::is_active(uVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack320,false);
  uVar5 = lib::L2CValue::operator==((L2CValue *)&local_a0,aLStack320);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(param_1,false);
    lib::L2CValue::L2CValue(param_1 + 0x10,0);
    lib::L2CValue::L2CValue(param_1 + 0x20,0);
    lib::L2CValue::L2CValue(param_1 + 0x30,0);
    lib::L2CValue::L2CValue(param_1 + 0x40,0);
    goto LAB_7100034a34;
  }
  uVar3 = lib::L2CValue::as_integer(param_3);
  pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar3);
  if (pvVar6 == (void *)0x0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack384 + 0x10),(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)(auStack384 + 0x10),pvVar6);
  }
  uVar5 = lib::L2CValue::operator==
                    ((L2CValue *)(auStack384 + 0x10),(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::operator*(param_4,aLStack240);
    lib::L2CValue::operator=(param_4,aLStack320);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::L2CValue((L2CValue *)auStack384);
    lib::L2CValue::L2CValue((L2CValue *)(auStack416 + 0x10));
    pGVar7 = (GroundCollisionLine *)lib::L2CValue::as_pointer(aLStack176);
    uVar17 = app::sv_ground_collision_line::get_normal(pGVar7);
    lib::L2CValue::L2CValue(aLStack320,(float)uVar17);
    lib::L2CValue::L2CValue(aLStack304,(float)((ulong)uVar17 >> 0x20));
    lib::L2CValue::operator=((L2CValue *)auStack384,aLStack320);
    lib::L2CValue::operator=((L2CValue *)(auStack416 + 0x10),aLStack304);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CAgent::math_atan((L2CAgent *)auStack384,(L2CValue *)(auStack416 + 0x10),pLVar12);
    fVar13 = (float)app::lua_bind::PostureModule__lr_impl
                              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,fVar13);
    lib::L2CValue::operator*(aLStack320,(L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::L2CValue(aLStack432);
    lib::L2CValue::L2CValue(aLStack448);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,GROUND_TOUCH_FLAG_DOWN);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    pBVar8 = (BattleObjectModuleAccessor *)
             lib::L2CValue::as_pointer((L2CValue *)(auStack384 + 0x10));
    uVar17 = app::lua_bind::GroundModule__get_touch_normal_impl(pBVar8,uVar3);
    lib::L2CValue::L2CValue(aLStack320,(float)uVar17);
    lib::L2CValue::L2CValue(aLStack304,(float)((ulong)uVar17 >> 0x20));
    lib::L2CValue::operator=(aLStack432,aLStack320);
    lib::L2CValue::operator=(aLStack448,aLStack304);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    pLVar12 = (L2CValue *)0xf;
    lib::L2CValue::L2CValue(aLStack464,0xf);
    fVar13 = (float)lib::L2CValue::as_number(aLStack432);
    fVar14 = (float)lib::L2CValue::as_number(aLStack448);
    fVar15 = (float)lib::L2CValue::as_number((L2CValue *)auStack384);
    fVar16 = (float)lib::L2CValue::as_number((L2CValue *)(auStack416 + 0x10));
    fVar13 = (float)app::sv_math::vec2_angle(fVar13,fVar14,fVar15,fVar16);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,fVar13);
    lib::L2CAgent::math_deg((L2CAgent *)&local_a0,pLVar12);
    bVar1 = lib::L2CValue::operator<(aLStack464,aLStack320);
    lib::L2CValue::L2CValue(aLStack480,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue(aLStack320,false);
    uVar5 = lib::L2CValue::operator==(aLStack480,aLStack320);
    lib::L2CValue::~L2CValue(aLStack320);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack320,0);
      uVar5 = lib::L2CValue::operator<(aLStack224,aLStack320);
      lib::L2CValue::~L2CValue(aLStack320);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack320,0);
        uVar5 = lib::L2CValue::operator<(aLStack320,aLStack224);
        lib::L2CValue::~L2CValue(aLStack320);
        if ((uVar5 & 1) == 0) goto LAB_710003408c;
        lib::L2CValue::L2CValue(aLStack496,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        lib::L2CValue::L2CValue(aLStack512,0.0);
        lib::L2CValue::L2CValue(aLStack528,0.0);
        pBVar8 = (BattleObjectModuleAccessor *)
                 lib::L2CValue::as_pointer((L2CValue *)(auStack384 + 0x10));
        pGVar7 = (GroundCollisionLine *)lib::L2CValue::as_pointer(aLStack176);
        fVar13 = (float)lib::L2CValue::as_number(aLStack192);
        fVar14 = (float)lib::L2CValue::as_number(param_4);
        uVar5 = lib::L2CValue::as_number(aLStack512);
        uVar3 = lib::L2CValue::as_number(aLStack528);
        local_a0 = (void **)(uVar5 & 0xffffffff | (ulong)uVar3 << 0x20);
        plStack152 = (lua_State *)0x0;
        pvVar6 = (void *)app::FighterUtil::get_pos_on_line
                                   (pBVar8,pGVar7,fVar13,fVar14,(Vector2f *)&local_a0);
        if (pvVar6 == (void *)0x0) {
          lib::L2CValue::L2CValue(aLStack320,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue(aLStack320,pvVar6);
        }
        lib::L2CValue::L2CValue(aLStack304,(float)local_a0);
        lib::L2CValue::L2CValue(aLStack288,local_a0._4_4_);
        lib::L2CValue::operator=(aLStack496,aLStack320);
        lib::L2CValue::operator=(aLStack512,aLStack304);
        lib::L2CValue::operator=(aLStack528,aLStack288);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack320);
        uVar5 = lib::L2CValue::operator==(aLStack496,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        if (((uVar5 & 1) == 0) &&
           (uVar5 = lib::L2CValue::operator==(aLStack176,aLStack496), (uVar5 & 1) == 0)) {
          lib::L2CValue::L2CValue((L2CValue *)&local_a0);
          lib::L2CValue::L2CValue(aLStack544);
          pGVar7 = (GroundCollisionLine *)lib::L2CValue::as_pointer(aLStack176);
          uVar17 = app::sv_ground_collision_line::get_normal(pGVar7);
          lib::L2CValue::L2CValue(aLStack320,(float)uVar17);
          lib::L2CValue::L2CValue(aLStack304,(float)((ulong)uVar17 >> 0x20));
          lib::L2CValue::operator=((L2CValue *)&local_a0,aLStack320);
          lib::L2CValue::operator=(aLStack544,aLStack304);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::~L2CValue(aLStack320);
          lib::L2CValue::L2CValue(aLStack560);
          lib::L2CValue::L2CValue((L2CValue *)(auStack592 + 0x10));
          pGVar7 = (GroundCollisionLine *)lib::L2CValue::as_pointer(aLStack496);
          uVar17 = app::sv_ground_collision_line::get_normal(pGVar7);
          lib::L2CValue::L2CValue(aLStack320,(float)uVar17);
          lib::L2CValue::L2CValue(aLStack304,(float)((ulong)uVar17 >> 0x20));
          lib::L2CValue::operator=(aLStack560,aLStack320);
          pLVar12 = aLStack304;
          lib::L2CValue::operator=((L2CValue *)(auStack592 + 0x10),aLStack304);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::~L2CValue(aLStack320);
          fVar13 = (float)lib::L2CValue::as_number((L2CValue *)&local_a0);
          fVar14 = (float)lib::L2CValue::as_number(aLStack544);
          fVar15 = (float)lib::L2CValue::as_number(aLStack560);
          fVar16 = (float)lib::L2CValue::as_number((L2CValue *)(auStack592 + 0x10));
          fVar13 = (float)app::sv_math::vec2_angle(fVar13,fVar14,fVar15,fVar16);
          lib::L2CValue::L2CValue((L2CValue *)auStack592,fVar13);
          lib::L2CAgent::math_deg((L2CAgent *)auStack592,pLVar12);
          uVar5 = lib::L2CValue::operator<(aLStack464,aLStack320);
          lib::L2CValue::~L2CValue(aLStack320);
          lib::L2CValue::~L2CValue((L2CValue *)auStack592);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack320,true);
            lib::L2CValue::operator=(aLStack480,aLStack320);
            goto LAB_710003404c;
          }
          goto LAB_7100034054;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack496,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        lib::L2CValue::L2CValue(aLStack512,0.0);
        lib::L2CValue::L2CValue(aLStack528,0.0);
        lib::L2CValue::operator-(param_4);
        pBVar8 = (BattleObjectModuleAccessor *)
                 lib::L2CValue::as_pointer((L2CValue *)(auStack384 + 0x10));
        pGVar7 = (GroundCollisionLine *)lib::L2CValue::as_pointer(aLStack176);
        fVar13 = (float)lib::L2CValue::as_number(aLStack192);
        fVar14 = (float)lib::L2CValue::as_number(aLStack544);
        uVar5 = lib::L2CValue::as_number(aLStack512);
        uVar3 = lib::L2CValue::as_number(aLStack528);
        local_a0 = (void **)(uVar5 & 0xffffffff | (ulong)uVar3 << 0x20);
        plStack152 = (lua_State *)0x0;
        pvVar6 = (void *)app::FighterUtil::get_pos_on_line
                                   (pBVar8,pGVar7,fVar13,fVar14,(Vector2f *)&local_a0);
        if (pvVar6 == (void *)0x0) {
          lib::L2CValue::L2CValue(aLStack320,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue(aLStack320,pvVar6);
        }
        lib::L2CValue::L2CValue(aLStack304,(float)local_a0);
        lib::L2CValue::L2CValue(aLStack288,local_a0._4_4_);
        lib::L2CValue::operator=(aLStack496,aLStack320);
        lib::L2CValue::operator=(aLStack512,aLStack304);
        lib::L2CValue::operator=(aLStack528,aLStack288);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack544);
        uVar5 = lib::L2CValue::operator==(aLStack496,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        if (((uVar5 & 1) == 0) &&
           (uVar5 = lib::L2CValue::operator==(aLStack176,aLStack496), (uVar5 & 1) == 0)) {
          lib::L2CValue::L2CValue((L2CValue *)&local_a0);
          lib::L2CValue::L2CValue(aLStack544);
          pGVar7 = (GroundCollisionLine *)lib::L2CValue::as_pointer(aLStack176);
          uVar17 = app::sv_ground_collision_line::get_normal(pGVar7);
          lib::L2CValue::L2CValue(aLStack320,(float)uVar17);
          lib::L2CValue::L2CValue(aLStack304,(float)((ulong)uVar17 >> 0x20));
          lib::L2CValue::operator=((L2CValue *)&local_a0,aLStack320);
          lib::L2CValue::operator=(aLStack544,aLStack304);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::~L2CValue(aLStack320);
          lib::L2CValue::L2CValue(aLStack560);
          lib::L2CValue::L2CValue((L2CValue *)(auStack592 + 0x10));
          pGVar7 = (GroundCollisionLine *)lib::L2CValue::as_pointer(aLStack496);
          uVar17 = app::sv_ground_collision_line::get_normal(pGVar7);
          lib::L2CValue::L2CValue(aLStack320,(float)uVar17);
          lib::L2CValue::L2CValue(aLStack304,(float)((ulong)uVar17 >> 0x20));
          lib::L2CValue::operator=(aLStack560,aLStack320);
          pLVar12 = aLStack304;
          lib::L2CValue::operator=((L2CValue *)(auStack592 + 0x10),aLStack304);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::~L2CValue(aLStack320);
          fVar13 = (float)lib::L2CValue::as_number((L2CValue *)&local_a0);
          fVar14 = (float)lib::L2CValue::as_number(aLStack544);
          fVar15 = (float)lib::L2CValue::as_number(aLStack560);
          fVar16 = (float)lib::L2CValue::as_number((L2CValue *)(auStack592 + 0x10));
          fVar13 = (float)app::sv_math::vec2_angle(fVar13,fVar14,fVar15,fVar16);
          lib::L2CValue::L2CValue((L2CValue *)auStack592,fVar13);
          lib::L2CAgent::math_deg((L2CAgent *)auStack592,pLVar12);
          uVar5 = lib::L2CValue::operator<(aLStack464,aLStack320);
          lib::L2CValue::~L2CValue(aLStack320);
          lib::L2CValue::~L2CValue((L2CValue *)auStack592);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack320,true);
            lib::L2CValue::operator=(aLStack480,aLStack320);
LAB_710003404c:
            lib::L2CValue::~L2CValue(aLStack320);
          }
LAB_7100034054:
          lib::L2CValue::~L2CValue((L2CValue *)(auStack592 + 0x10));
          lib::L2CValue::~L2CValue(aLStack560);
          lib::L2CValue::~L2CValue(aLStack544);
          lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
        }
      }
      lib::L2CValue::~L2CValue(aLStack528);
      lib::L2CValue::~L2CValue(aLStack512);
      lib::L2CValue::~L2CValue(aLStack496);
    }
LAB_710003408c:
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack480);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack608,0.0);
      lib::L2CValue::L2CValue(aLStack624,0.0);
      lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0xa0,(L2CValue)0x90);
      lib::L2CValue::~L2CValue(aLStack624);
      lib::L2CValue::~L2CValue(aLStack608);
      lib::L2CValue::L2CValue(aLStack640,0.0);
      lib::L2CValue::L2CValue(aLStack656,0.0);
      lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x80,(L2CValue)0x70);
      lib::L2CValue::~L2CValue(aLStack656);
      lib::L2CValue::~L2CValue(aLStack640);
      lib::L2CValue::L2CValue(aLStack672,0.0);
      lib::L2CValue::L2CValue(aLStack688,0.0);
      lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x60,(L2CValue)0x50);
      lib::L2CValue::~L2CValue(aLStack688);
      lib::L2CValue::~L2CValue(aLStack672);
      pLVar12 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x18cdc1683);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x1fbdb2615);
      pGVar7 = (GroundCollisionLine *)lib::L2CValue::as_pointer(aLStack176);
      uVar17 = app::sv_ground_collision_line::get_center_pos(pGVar7);
      lib::L2CValue::L2CValue(aLStack320,(float)uVar17);
      lib::L2CValue::L2CValue(aLStack304,(float)((ulong)uVar17 >> 0x20));
      lib::L2CValue::operator=(pLVar12,aLStack320);
      lib::L2CValue::operator=(pLVar9,aLStack304);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack320);
      pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack496,0x18cdc1683);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack496,0x1fbdb2615);
      pGVar7 = (GroundCollisionLine *)lib::L2CValue::as_pointer(aLStack176);
      uVar17 = app::sv_ground_collision_line::get_left_pos(pGVar7);
      lib::L2CValue::L2CValue(aLStack320,(float)uVar17);
      lib::L2CValue::L2CValue(aLStack304,(float)((ulong)uVar17 >> 0x20));
      lib::L2CValue::operator=(pLVar12,aLStack320);
      lib::L2CValue::operator=(pLVar9,aLStack304);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack320);
      pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack512,0x18cdc1683);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack512,0x1fbdb2615);
      pGVar7 = (GroundCollisionLine *)lib::L2CValue::as_pointer(aLStack176);
      uVar17 = app::sv_ground_collision_line::get_right_pos(pGVar7);
      lib::L2CValue::L2CValue(aLStack320,(float)uVar17);
      lib::L2CValue::L2CValue(aLStack304,(float)((ulong)uVar17 >> 0x20));
      lib::L2CValue::operator=(pLVar12,aLStack320);
      lib::L2CValue::operator=(pLVar9,aLStack304);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack320);
      pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack496,0x18cdc1683);
      lib::L2CValue::L2CValue(aLStack704,pLVar12);
      pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack496,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack720,pLVar12);
      lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x40,(L2CValue)0x30);
      lib::L2CValue::~L2CValue(aLStack720);
      lib::L2CValue::~L2CValue(aLStack704);
      lib::L2CValue::operator-(aLStack528,(L2CValue *)&local_a0);
      lib::L2CValue::operator=(aLStack528,aLStack320);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::L2CValue(aLStack752,aLStack192);
      lib::L2CValue::L2CValue(aLStack768,aLStack208);
      lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x10,(L2CValue)0x0);
      lib::L2CValue::operator-(aLStack496,aLStack320);
      lua2cpp::L2CFighterBase::Vector2__length(param_2,(L2CValue)0x20);
      lib::L2CValue::~L2CValue(aLStack736);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack768);
      lib::L2CValue::~L2CValue(aLStack752);
      lib::L2CValue::L2CValue(aLStack800,aLStack192);
      lib::L2CValue::L2CValue(aLStack816,aLStack208);
      lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0xe0,(L2CValue)0xd0);
      lib::L2CValue::operator-(aLStack512,aLStack320);
      lua2cpp::L2CFighterBase::Vector2__length(param_2,(L2CValue)0xf0);
      lib::L2CValue::~L2CValue(aLStack784);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack816);
      lib::L2CValue::~L2CValue(aLStack800);
      lib::L2CValue::operator+(aLStack544,aLStack560);
      lib::L2CValue::L2CValue(aLStack320,2.0);
      lib::L2CValue::operator*(param_4,aLStack320);
      lib::L2CValue::~L2CValue(aLStack320);
      uVar5 = lib::L2CValue::operator<((L2CValue *)(auStack592 + 0x10),(L2CValue *)auStack592);
      lib::L2CValue::~L2CValue((L2CValue *)auStack592);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack592 + 0x10));
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack320,false);
        lib::L2CValue::operator=(aLStack480,aLStack320);
        lib::L2CValue::~L2CValue(aLStack320);
      }
      uVar5 = lib::L2CValue::operator<(aLStack544,param_4);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::operator<(aLStack560,param_4);
      }
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack480);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack832,aLStack528);
        lua2cpp::L2CFighterBase::Vector2__normalize(param_2,(L2CValue)0xc0);
        lib::L2CValue::operator=(aLStack528,aLStack320);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack832);
        uVar5 = lib::L2CValue::operator<(aLStack544,param_4);
        if ((uVar5 & 1) == 0) {
          uVar5 = lib::L2CValue::operator<(aLStack560,param_4);
          if ((uVar5 & 1) == 0) goto LAB_710003477c;
          lib::L2CValue::operator-(param_4,aLStack560);
          lib::L2CValue::operator=(aLStack560,aLStack320);
          lib::L2CValue::~L2CValue(aLStack320);
          pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack528,0x18cdc1683);
          lib::L2CValue::operator*(pLVar12,aLStack560);
          pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack528,0x18cdc1683);
          lib::L2CValue::operator=(pLVar12,aLStack320);
          lib::L2CValue::~L2CValue(aLStack320);
          pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack528,0x1fbdb2615);
          lib::L2CValue::operator*(pLVar12,aLStack560);
          pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack528,0x1fbdb2615);
          lib::L2CValue::operator=(pLVar12,aLStack320);
          lib::L2CValue::~L2CValue(aLStack320);
          pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack528,0x18cdc1683);
          lib::L2CValue::operator+(aLStack192,pLVar12);
          lib::L2CValue::operator=(aLStack192,aLStack320);
          lib::L2CValue::~L2CValue(aLStack320);
          pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack528,0x1fbdb2615);
          lib::L2CValue::operator+(aLStack208,pLVar12);
          lib::L2CValue::operator=(aLStack208,aLStack320);
        }
        else {
          lib::L2CValue::operator-(param_4,aLStack544);
          lib::L2CValue::operator=(aLStack544,aLStack320);
          lib::L2CValue::~L2CValue(aLStack320);
          pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack528,0x18cdc1683);
          lib::L2CValue::operator*(pLVar12,aLStack544);
          pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack528,0x18cdc1683);
          lib::L2CValue::operator=(pLVar12,aLStack320);
          lib::L2CValue::~L2CValue(aLStack320);
          pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack528,0x1fbdb2615);
          lib::L2CValue::operator*(pLVar12,aLStack544);
          pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack528,0x1fbdb2615);
          lib::L2CValue::operator=(pLVar12,aLStack320);
          lib::L2CValue::~L2CValue(aLStack320);
          pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack528,0x18cdc1683);
          lib::L2CValue::operator-(aLStack192,pLVar12);
          lib::L2CValue::operator=(aLStack192,aLStack320);
          lib::L2CValue::~L2CValue(aLStack320);
          pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack528,0x1fbdb2615);
          lib::L2CValue::operator-(aLStack208,pLVar12);
          lib::L2CValue::operator=(aLStack208,aLStack320);
        }
        lib::L2CValue::~L2CValue(aLStack320);
      }
LAB_710003477c:
      lib::L2CValue::~L2CValue(aLStack560);
      lib::L2CValue::~L2CValue(aLStack544);
      lib::L2CValue::~L2CValue(aLStack528);
      lib::L2CValue::~L2CValue(aLStack512);
      lib::L2CValue::~L2CValue(aLStack496);
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    }
    lib::L2CValue::L2CValue(aLStack320,_FIGHTER_PICKEL_GENERATE_ARTICLE_PICKELBOMB);
    iVar4 = lib::L2CValue::as_integer(aLStack320);
    pvVar6 = (void *)app::lua_bind::ArticleModule__get_article_impl
                               (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,pvVar6);
    }
    lib::L2CValue::~L2CValue(aLStack320);
    uVar5 = lib::L2CValue::operator==
                      ((L2CValue *)&local_a0,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    if ((uVar5 & 1) == 0) {
      pAVar10 = (Article *)lib::L2CValue::as_pointer((L2CValue *)&local_a0);
      uVar3 = app::lua_bind::Article__get_battle_object_id_impl(pAVar10);
      lib::L2CValue::L2CValue(aLStack496,uVar3);
      uVar3 = lib::L2CValue::as_integer(aLStack496);
      pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar3);
      if (pvVar6 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack320,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack320,pvVar6);
      }
      lib::L2CValue::operator=((L2CValue *)(auStack384 + 0x10),aLStack320);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack496);
      uVar5 = lib::L2CValue::operator==
                        ((L2CValue *)(auStack384 + 0x10),(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      if ((uVar5 & 1) != 0) goto LAB_71000349a0;
      lib::L2CValue::L2CValue(aLStack512,true);
      bVar1 = lib::L2CValue::as_bool(aLStack512);
      pBVar8 = (BattleObjectModuleAccessor *)
               lib::L2CValue::as_pointer((L2CValue *)(auStack384 + 0x10));
      pRVar11 = (Rhombus2 *)app::lua_bind::GroundModule__get_rhombus_impl(pBVar8,(bool)(bVar1 & 1));
      app::lua_bind::Rhombus2__store_l2c_table_impl(pRVar11);
      lib::L2CValue::L2CValue(aLStack864,aLStack192);
      lib::L2CValue::L2CValue(aLStack320,0.1);
      lib::L2CValue::operator+(aLStack208,aLStack320);
      lib::L2CValue::~L2CValue(aLStack320);
      FUN_7100035f40(aLStack496,aLStack848,aLStack864,aLStack880);
      lib::L2CValue::L2CValue(aLStack320,true);
      uVar5 = lib::L2CValue::operator==(aLStack496,aLStack320);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack496);
      lib::L2CValue::~L2CValue(aLStack880);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::~L2CValue(aLStack848);
      lib::L2CValue::~L2CValue(aLStack512);
      if ((uVar5 & 1) == 0) goto LAB_71000349a0;
      lib::L2CValue::L2CValue(param_1,false);
      lib::L2CValue::L2CValue(param_1 + 0x10,0);
      lib::L2CValue::L2CValue(param_1 + 0x20,0);
      lib::L2CValue::L2CValue(param_1 + 0x30,0);
      lib::L2CValue::L2CValue(param_1 + 0x40,0);
    }
    else {
LAB_71000349a0:
      lib::L2CValue::L2CValue(param_1,true);
      lib::L2CValue::L2CValue(param_1 + 0x10,aLStack192);
      pLVar12 = aLStack208;
      lib::L2CValue::L2CValue(param_1 + 0x20,pLVar12);
      lib::L2CAgent::math_deg((L2CAgent *)auStack416,pLVar12);
      lib::L2CValue::L2CValue(param_1 + 0x40,aLStack240);
    }
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue(aLStack480);
    lib::L2CValue::~L2CValue(aLStack464);
    lib::L2CValue::~L2CValue(aLStack448);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue((L2CValue *)auStack416);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack416 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack384);
  }
  else {
    lib::L2CValue::L2CValue(param_1,false);
    lib::L2CValue::L2CValue(param_1 + 0x10,0);
    lib::L2CValue::L2CValue(param_1 + 0x20,0);
    lib::L2CValue::L2CValue(param_1 + 0x30,0);
    lib::L2CValue::L2CValue(param_1 + 0x40,0);
  }
  lib::L2CValue::~L2CValue((L2CValue *)(auStack384 + 0x10));
LAB_7100034a34:
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  return;
}

