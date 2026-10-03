
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000160e0(void *param_1,undefined8 param_2,L2CValue *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CAgent *pLVar7;
  L2CValue *this;
  Hash40MapEntry ***pppHVar8;
  L2CValue *pLVar9;
  Hash40 HVar10;
  Hash40MapEntry ***pppHVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  long lVar17;
  Hash40MapEntry **appHStack464 [2];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  Hash40MapEntry **appHStack400 [2];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  undefined auStack256 [32];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  Hash40MapEntry **local_70;
  ulong uStack104;
  
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack256,0);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue(aLStack288,0);
  lib::L2CValue::L2CValue(aLStack304,0);
  lib::L2CValue::L2CValue(aLStack320,0);
  lib::L2CValue::L2CValue(aLStack336,false);
  lib::L2CValue::L2CValue(aLStack352,false);
  lib::L2CValue::L2CValue(aLStack368,0);
  lib::L2CValue::L2CValue(aLStack384,0);
  fVar12 = (float)app::lua_bind::MotionModule__frame_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)appHStack400,fVar12);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,1.0);
  lib::L2CValue::operator+((L2CValue *)appHStack400,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::operator=(aLStack272,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue((L2CValue *)appHStack400);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x15);
  uVar5 = lib::L2CValue::operator<=((L2CValue *)&local_70,aLStack272);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  if ((uVar5 & 1) == 0) goto LAB_7100016c64;
  lib::L2CValue::L2CValue
            ((L2CValue *)appHStack400,_FIGHTER_MIISWORDSMAN_SDUSH_STATUS_WORK_ID_FLAG_DECIDE_STICK);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)appHStack400);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::operator!(aLStack128);
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue((L2CValue *)appHStack400);
  if ((bVar2 & 1U) != 0) {
    pLVar9 = (L2CValue *)((long)param_1 + 200);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x1a);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::operator+(pLVar6,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,
               _FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLOAT_SDUSH_DECIDE_STICK_X);
    fVar12 = (float)lib::L2CValue::as_number(aLStack128);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar12,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack128);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x1b);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::operator+(pLVar6,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,
               _FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLOAT_SDUSH_DECIDE_STICK_Y);
    fVar12 = (float)lib::L2CValue::as_number(aLStack128);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar12,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack128);
    pLVar6 = (L2CValue *)0x1a;
    pLVar7 = (L2CAgent *)lib::L2CValue::operator[](pLVar9,0x1a);
    lib::L2CAgent::math_abs(pLVar7,pLVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.125);
    pLVar6 = aLStack128;
    uVar5 = lib::L2CValue::operator<((L2CValue *)&local_70,pLVar6);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      uVar4 = app::lua_bind::PostureModule__set_stick_lr_impl
                        (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),0.0);
      pLVar6 = (L2CValue *)(ulong)(uVar4 & 1);
      lib::L2CValue::L2CValue(aLStack416,SUB41(uVar4 & 1,0));
      lib::L2CValue::~L2CValue(aLStack416);
      app::lua_bind::PostureModule__update_rot_y_lr_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
    }
    lib::L2CValue::L2CValue(aLStack128,90.0);
    lib::L2CAgent::math_rad((L2CAgent *)aLStack128,pLVar6);
    lib::L2CValue::operator=((L2CValue *)auStack256,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.5);
    lib::L2CValue::operator=(aLStack304,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    fVar12 = (float)app::lua_bind::PostureModule__lr_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar12);
    lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar6,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
      pppHVar11 = &local_70;
      lib::L2CValue::operator=(aLStack336,(L2CValue *)pppHVar11);
      pppHVar8 = &local_70;
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)appHStack464,GROUND_TOUCH_FLAG_DOWN);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)appHStack464);
      uVar16 = app::lua_bind::GroundModule__get_touch_normal_impl
                         (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar4);
      lib::L2CValue::L2CValue(aLStack448,(float)uVar16);
      lib::L2CValue::L2CValue(aLStack432,(float)((ulong)uVar16 >> 0x20));
      lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack448);
      lib::L2CValue::L2CValue(aLStack128,aLStack432);
      param_3 = aLStack128;
      lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x90,SUB81(param_3,0));
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::~L2CValue(aLStack448);
      lib::L2CValue::~L2CValue((L2CValue *)appHStack464);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)appHStack400,0x18cdc1683);
      lib::L2CValue::operator=(aLStack208,pLVar6);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)appHStack400,0x1fbdb2615);
      lib::L2CValue::operator=(aLStack192,pLVar6);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
      lib::L2CValue::operator=(aLStack352,(L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      pLVar6 = (L2CValue *)0x1a;
      pLVar7 = (L2CAgent *)lib::L2CValue::operator[](pLVar9,0x1a);
      lib::L2CAgent::math_abs(pLVar7,pLVar6);
      pLVar6 = (L2CValue *)0x1b;
      pLVar7 = (L2CAgent *)lib::L2CValue::operator[](pLVar9,0x1b);
      lib::L2CAgent::math_abs(pLVar7,pLVar6);
      lib::L2CValue::operator+(aLStack128,(L2CValue *)appHStack464);
      uVar5 = lib::L2CValue::operator<((L2CValue *)&local_70,aLStack304);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)appHStack464);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar5 & 1) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x1a);
        this = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x1b);
        fVar12 = (float)lib::L2CValue::as_number(aLStack208);
        fVar13 = (float)lib::L2CValue::as_number(aLStack192);
        fVar14 = (float)lib::L2CValue::as_number(pLVar6);
        fVar15 = (float)lib::L2CValue::as_number(this);
        fVar12 = (float)app::sv_math::vec2_angle(fVar12,fVar13,fVar14,fVar15);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar12);
        pppHVar8 = &local_70;
        lib::L2CValue::operator=((L2CValue *)(auStack256 + 0x10),(L2CValue *)pppHVar8);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::L2CValue(aLStack128,90.0);
        lib::L2CAgent::math_rad((L2CAgent *)aLStack128,(L2CValue *)pppHVar8);
        uVar5 = lib::L2CValue::operator<=((L2CValue *)&local_70,(L2CValue *)(auStack256 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
          lib::L2CValue::operator=(aLStack352,(L2CValue *)&local_70);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        }
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
      uVar5 = lib::L2CValue::operator==(aLStack352,(L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
        pppHVar11 = &local_70;
        lib::L2CValue::operator=(aLStack336,(L2CValue *)pppHVar11);
        pppHVar8 = &local_70;
      }
      else {
        lib::L2CValue::operator-(aLStack208);
        lib::L2CValue::operator*((L2CValue *)appHStack464,aLStack144);
        lib::L2CAgent::math_atan((L2CAgent *)aLStack128,aLStack192,param_3);
        pppHVar11 = &local_70;
        lib::L2CValue::operator=((L2CValue *)auStack256,(L2CValue *)pppHVar11);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue(aLStack128);
        pppHVar8 = appHStack464;
      }
      lib::L2CValue::~L2CValue((L2CValue *)pppHVar8);
      pppHVar8 = appHStack400;
    }
    lib::L2CValue::~L2CValue((L2CValue *)pppHVar8);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack336);
    if ((bVar2 & 1U) != 0) {
      pLVar6 = (L2CValue *)0x1a;
      pLVar7 = (L2CAgent *)lib::L2CValue::operator[](pLVar9,0x1a);
      lib::L2CAgent::math_abs(pLVar7,pLVar6);
      pLVar6 = (L2CValue *)0x1b;
      pLVar7 = (L2CAgent *)lib::L2CValue::operator[](pLVar9,0x1b);
      lib::L2CAgent::math_abs(pLVar7,pLVar6);
      lib::L2CValue::operator+(aLStack128,(L2CValue *)appHStack400);
      pppHVar11 = &local_70;
      uVar5 = lib::L2CValue::operator<=(aLStack304,(L2CValue *)pppHVar11);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)appHStack400);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) {
        pLVar7 = (L2CAgent *)lib::L2CValue::operator[](pLVar9,0x1b);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x1a);
        lib::L2CValue::operator*(pLVar9,aLStack144);
        lib::L2CAgent::math_atan(pLVar7,aLStack128,param_3);
        pppHVar11 = &local_70;
        lib::L2CValue::operator=((L2CValue *)auStack256,(L2CValue *)pppHVar11);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue(aLStack128);
      }
    }
    lib::L2CAgent::math_deg((L2CAgent *)auStack256,(L2CValue *)pppHVar11);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,360.0);
    lib::L2CValue::operator-((L2CValue *)&local_70,(L2CValue *)appHStack400);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::operator=(aLStack160,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue((L2CValue *)appHStack400);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,360.0);
    uVar5 = lib::L2CValue::operator<((L2CValue *)&local_70,aLStack160);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,180.0);
      pLVar9 = aLStack160;
      uVar5 = lib::L2CValue::operator<((L2CValue *)&local_70,pLVar9);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      if ((uVar5 & 1) != 0) {
        lib::L2CAgent::math_deg((L2CAgent *)auStack256,pLVar9);
        lib::L2CValue::operator-(aLStack128);
        lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_70);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        goto LAB_7100016984;
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,360.0);
      lib::L2CValue::operator-(aLStack160,(L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::operator=(aLStack160,aLStack128);
LAB_7100016984:
      lib::L2CValue::~L2CValue(aLStack128);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::operator+(aLStack160,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,
               _FIGHTER_MIISWORDSMAN_SDUSH_STATUS_WORK_ID_FLOAT_INIT_ROT_DEGREE);
    fVar12 = (float)lib::L2CValue::as_number(aLStack128);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar12,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_FIGHTER_MIISWORDSMAN_SDUSH_STATUS_WORK_ID_FLAG_DECIDE_STICK);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__on_flag_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  }
  uVar4 = app::lua_bind::MotionModule__end_frame_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)&local_70,uVar4);
  lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::operator=(aLStack224,aLStack176);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x15);
  lib::L2CValue::operator-(aLStack224,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::operator=(aLStack288,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::operator-(aLStack224,aLStack272);
  lib::L2CValue::operator=(aLStack320,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::operator-(aLStack288,aLStack320);
  lib::L2CValue::operator=(aLStack320,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)appHStack400,
             _FIGHTER_MIISWORDSMAN_SDUSH_STATUS_WORK_ID_FLOAT_INIT_ROT_DEGREE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)appHStack400);
  fVar12 = (float)app::lua_bind::WorkModule__get_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar12);
  lib::L2CValue::operator/(aLStack128,aLStack288);
  lib::L2CValue::operator=(aLStack368,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue((L2CValue *)appHStack400);
  lib::L2CValue::operator*(aLStack368,aLStack320);
  lib::L2CValue::operator=(aLStack384,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
  lib::L2CValue::operator+(aLStack384,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_MIISWORDSMAN_SDUSH_STATUS_WORK_ID_FLOAT_ROT_X);
  fVar12 = (float)lib::L2CValue::as_number(aLStack128);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar12,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,0x31d39a761);
  lib::L2CValue::L2CValue((L2CValue *)appHStack400,0.0);
  lib::L2CValue::L2CValue((L2CValue *)appHStack464,0.0);
  HVar10 = lib::L2CValue::as_hash(aLStack128);
  uVar5 = lib::L2CValue::as_number(aLStack384);
  lVar17 = lib::L2CValue::as_number((L2CValue *)appHStack400);
  uVar4 = lib::L2CValue::as_number((L2CValue *)appHStack464);
  local_70 = (Hash40MapEntry **)(uVar5 & 0xffffffff | lVar17 << 0x20);
  uStack104 = (ulong)uVar4;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar10,(Vector3f *)&local_70,0,0
            );
  lib::L2CValue::~L2CValue((L2CValue *)appHStack464);
  lib::L2CValue::~L2CValue((L2CValue *)appHStack400);
  lib::L2CValue::~L2CValue(aLStack128);
LAB_7100016c64:
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue((L2CValue *)auStack256);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  return;
}

