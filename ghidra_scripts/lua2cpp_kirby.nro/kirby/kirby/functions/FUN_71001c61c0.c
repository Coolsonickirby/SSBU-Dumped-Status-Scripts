
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001c61c0(void *param_1)

{
  L2CValue LVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  L2CValue *pLVar8;
  BattleObjectModuleAccessor *pBVar9;
  L2CValue *pLVar10;
  float *pfVar11;
  void *pvVar12;
  KineticEnergyNormal *pKVar13;
  L2CAgent *this;
  L2CValue *pLVar14;
  Hash40 HVar15;
  ulong uVar16;
  ulong uVar17;
  BattleObjectModuleAccessor **ppBVar18;
  float fVar19;
  undefined8 uVar20;
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
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
  ulong local_f0;
  undefined8 uStack232;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  ppBVar18 = (BattleObjectModuleAccessor **)((long)param_1 + 0x40);
  iVar5 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar18);
  lib::L2CValue::L2CValue(aLStack112,iVar5);
  pLVar14 = (L2CValue *)((long)param_1 + 200);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar14,3);
  uVar6 = lib::L2CValue::as_integer(pLVar8);
  uVar6 = app::sv_battle_object::kind(uVar6);
  lib::L2CValue::L2CValue(aLStack128,uVar6);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_CROWN_EFFECT_ENABLE);
  iVar5 = lib::L2CValue::as_integer(aLStack144);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar18,iVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((bVar4 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,1);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT5);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
    iVar7 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__add_int_impl(*ppBVar18,iVar5,iVar7);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_CHANGE_END);
  iVar5 = lib::L2CValue::as_integer(aLStack144);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar18,iVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((bVar4 & 1U) != 0) {
    FUN_71001b9da0(param_1);
    goto LAB_71001c75a0;
  }
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar14,5);
  pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
  app::FighterSpecializer_Kirby::purin_set_power(pBVar9);
  lib::L2CValue::L2CValue(aLStack144,false);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_CROWN_EFFECT_ENABLE);
  iVar5 = lib::L2CValue::as_integer(aLStack176);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar18,iVar5);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,false);
  uVar16 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&local_f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  if ((uVar16 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT5);
    iVar5 = lib::L2CValue::as_integer(aLStack160);
    iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar18,iVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,iVar5);
    lib::L2CValue::L2CValue(aLStack288,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack528,0x1293485600);
    uVar16 = lib::L2CValue::as_integer(aLStack288);
    uVar17 = lib::L2CValue::as_integer(aLStack528);
    iVar5 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar18,uVar16,uVar17);
    lib::L2CValue::L2CValue(aLStack176,iVar5);
    uVar16 = lib::L2CValue::operator<(aLStack176,(L2CValue *)&local_f0);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack528);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((uVar16 & 1) == 0) goto LAB_71001c6b7c;
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,false);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_CROWN_EFFECT_ENABLE);
    bVar3 = lib::L2CValue::as_bool((L2CValue *)&local_f0);
    iVar5 = lib::L2CValue::as_integer(aLStack160);
    app::lua_bind::WorkModule__set_flag_impl(*ppBVar18,(bool)(bVar3 & 1),iVar5);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,0);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT5);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
    iVar7 = lib::L2CValue::as_integer(aLStack160);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar18,iVar5,iVar7);
    lib::L2CValue::~L2CValue(aLStack160);
    lVar2 = -0xe0;
LAB_71001c6b78:
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
    iVar5 = lib::L2CValue::as_integer(aLStack176);
    fVar19 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar18,iVar5);
    lib::L2CValue::L2CValue(aLStack160,fVar19);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,1.0);
    uVar16 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&local_f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((uVar16 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack160,_GROUND_TOUCH_FLAG_LEFT);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      bVar3 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar18,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
      lib::L2CValue::~L2CValue(aLStack160);
      if ((bVar4 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack384,0.0);
        lib::L2CValue::L2CValue(aLStack400,0.0);
        lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x80,(L2CValue)0x70);
        lib::L2CValue::~L2CValue(aLStack400);
        lib::L2CValue::~L2CValue(aLStack384);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack176,_GROUND_TOUCH_FLAG_LEFT);
        uVar6 = lib::L2CValue::as_integer(aLStack176);
        pfVar11 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl(*ppBVar18,uVar6);
        lib::L2CValue::L2CValue((L2CValue *)&local_f0,*pfVar11);
        lib::L2CValue::L2CValue(aLStack224,pfVar11[1]);
        lib::L2CValue::operator=(pLVar8,(L2CValue *)&local_f0);
        lib::L2CValue::operator=(pLVar10,aLStack224);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::L2CValue(aLStack416,0.0);
        lib::L2CValue::L2CValue(aLStack432,0.0);
        lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x60,(L2CValue)0x50);
        lib::L2CValue::~L2CValue(aLStack432);
        lib::L2CValue::~L2CValue(aLStack416);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack288,_GROUND_TOUCH_FLAG_LEFT);
        uVar6 = lib::L2CValue::as_integer(aLStack288);
        uVar20 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar18,uVar6);
        lib::L2CValue::L2CValue((L2CValue *)&local_f0,(float)uVar20);
        lib::L2CValue::L2CValue(aLStack224,(float)((ulong)uVar20 >> 0x20));
        lib::L2CValue::operator=(pLVar8,(L2CValue *)&local_f0);
        lib::L2CValue::operator=(pLVar10,aLStack224);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
        lib::L2CValue::~L2CValue(aLStack288);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
        lib::L2CValue::L2CValue(aLStack448,pLVar8);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack464,pLVar8);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
        lib::L2CValue::L2CValue(aLStack480,pLVar8);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack496,pLVar8);
        lib::L2CValue::L2CValue(aLStack512,-1.0);
        FUN_71001c4d20(param_1,aLStack448,aLStack464,aLStack480,aLStack496);
        lib::L2CValue::~L2CValue(aLStack512);
        lib::L2CValue::~L2CValue(aLStack496);
        lib::L2CValue::~L2CValue(aLStack480);
        lib::L2CValue::~L2CValue(aLStack464);
        lib::L2CValue::~L2CValue(aLStack448);
        lib::L2CValue::L2CValue((L2CValue *)&local_f0,true);
        lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_f0);
        goto LAB_71001c6b64;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,GROUND_TOUCH_FLAG_RIGHT);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      bVar3 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar18,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
      lib::L2CValue::~L2CValue(aLStack160);
      if ((bVar4 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack192,0.0);
        lib::L2CValue::L2CValue(aLStack208,0.0);
        LVar1 = SUB81(&stack0xfffffffffffffff0,0);
        lua2cpp::L2CFighterBase::Vector2__create
                  (param_1,(L2CValue)((char)LVar1 + 'P'),(L2CValue)((char)LVar1 + '@'));
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack192);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack176,GROUND_TOUCH_FLAG_RIGHT);
        uVar6 = lib::L2CValue::as_integer(aLStack176);
        pfVar11 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl(*ppBVar18,uVar6);
        lib::L2CValue::L2CValue((L2CValue *)&local_f0,*pfVar11);
        lib::L2CValue::L2CValue(aLStack224,pfVar11[1]);
        lib::L2CValue::operator=(pLVar8,(L2CValue *)&local_f0);
        lib::L2CValue::operator=(pLVar10,aLStack224);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::L2CValue(aLStack256,0.0);
        lib::L2CValue::L2CValue(aLStack272,0.0);
        lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)((char)LVar1 + '\x10'),LVar1);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack256);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack288,GROUND_TOUCH_FLAG_RIGHT);
        uVar6 = lib::L2CValue::as_integer(aLStack288);
        uVar20 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar18,uVar6);
        lib::L2CValue::L2CValue((L2CValue *)&local_f0,(float)uVar20);
        lib::L2CValue::L2CValue(aLStack224,(float)((ulong)uVar20 >> 0x20));
        lib::L2CValue::operator=(pLVar8,(L2CValue *)&local_f0);
        lib::L2CValue::operator=(pLVar10,aLStack224);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
        lib::L2CValue::~L2CValue(aLStack288);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
        lib::L2CValue::L2CValue(aLStack304,pLVar8);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack320,pLVar8);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
        lib::L2CValue::L2CValue(aLStack336,pLVar8);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack352,pLVar8);
        lib::L2CValue::L2CValue(aLStack368,1.0);
        FUN_71001c4d20(param_1,aLStack304,aLStack320,aLStack336,aLStack352);
        lib::L2CValue::~L2CValue(aLStack368);
        lib::L2CValue::~L2CValue(aLStack352);
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::L2CValue((L2CValue *)&local_f0,true);
        lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_f0);
LAB_71001c6b64:
        lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
        lib::L2CValue::~L2CValue(aLStack176);
        lVar2 = -0x90;
        goto LAB_71001c6b78;
      }
    }
  }
LAB_71001c6b7c:
  lib::L2CValue::L2CValue(aLStack544,0.0);
  lib::L2CValue::L2CValue(aLStack560,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xe0,(L2CValue)0xd0);
  lib::L2CValue::~L2CValue(aLStack560);
  lib::L2CValue::~L2CValue(aLStack544);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack176,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar5 = lib::L2CValue::as_integer(aLStack176);
  uVar20 = app::lua_bind::KineticModule__get_sum_speed_impl(*ppBVar18,iVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,(float)uVar20);
  lib::L2CValue::L2CValue(aLStack224,(float)((ulong)uVar20 >> 0x20));
  lib::L2CValue::operator=(pLVar8,(L2CValue *)&local_f0);
  lib::L2CValue::operator=(pLVar10,aLStack224);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::~L2CValue(aLStack176);
  bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack144);
  if ((bVar4 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_LIFE);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
    iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar18,iVar5);
    lib::L2CValue::L2CValue(aLStack176,iVar5);
    lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,0);
    uVar16 = lib::L2CValue::operator<=(aLStack176,(L2CValue *)&local_f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
    if ((uVar16 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,0);
      lib::L2CValue::L2CValue(aLStack288,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_LIFE);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
      iVar7 = lib::L2CValue::as_integer(aLStack288);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar18,iVar5,iVar7);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_CHANGE_END)
      ;
      iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar18,iVar5);
      lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack528,0x13d96cf2a4);
    uVar16 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
    uVar17 = lib::L2CValue::as_integer(aLStack528);
    fVar19 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar18,uVar16,uVar17);
    lib::L2CValue::L2CValue(aLStack288,fVar19);
    lib::L2CValue::~L2CValue(aLStack528);
    lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::L2CValue(aLStack576,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_SPEED);
    iVar5 = lib::L2CValue::as_integer(aLStack576);
    fVar19 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar18,iVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,fVar19);
    lib::L2CValue::operator*((L2CValue *)&local_f0,aLStack288);
    lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_SPEED);
    fVar19 = (float)lib::L2CValue::as_number(aLStack528);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar18,fVar19,iVar5);
    lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
    pvVar12 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar18,iVar5);
    lib::L2CValue::L2CValue(aLStack576,pvVar12);
    lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack592,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar5 = lib::L2CValue::as_integer(aLStack592);
    uVar20 = app::lua_bind::KineticModule__get_sum_speed_impl(*ppBVar18,iVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,(float)uVar20);
    lib::L2CValue::L2CValue(aLStack224,(float)((ulong)uVar20 >> 0x20));
    lib::L2CValue::operator=(pLVar8,(L2CValue *)&local_f0);
    lib::L2CValue::operator=(pLVar10,aLStack224);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::~L2CValue(aLStack592);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
    lib::L2CValue::operator-(pLVar8);
    lib::L2CValue::operator*((L2CValue *)&local_f0,aLStack288);
    lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::L2CValue(aLStack608,0.0);
    uVar16 = lib::L2CValue::as_number(aLStack592);
    uVar6 = lib::L2CValue::as_number(aLStack608);
    local_f0 = uVar16 & 0xffffffff | (ulong)uVar6 << 0x20;
    uStack232 = 0;
    pKVar13 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack576);
    app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar13,(Vector2f *)&local_f0);
    lib::L2CValue::~L2CValue(aLStack608);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,0.0);
    uVar16 = lib::L2CValue::operator<((L2CValue *)&local_f0,aLStack592);
    lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
    if ((uVar16 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,1.0);
      lib::L2CValue::operator-((L2CValue *)&local_f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack608,1.0);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_f0,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
    fVar19 = (float)lib::L2CValue::as_number(aLStack608);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar18,fVar19,iVar5);
    lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
    fVar19 = (float)lib::L2CValue::as_number(aLStack608);
    app::lua_bind::PostureModule__set_lr_impl(*ppBVar18,fVar19);
    app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar18);
    lib::L2CValue::~L2CValue(aLStack608);
    lib::L2CValue::~L2CValue(aLStack592);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::~L2CValue(aLStack528);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack176);
  }
  lib::L2CValue::L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack288);
  lib::L2CValue::L2CValue(aLStack528);
  lib::L2CValue::L2CValue(aLStack576);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,4);
  lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,8);
  lib::L2CValue::operator=(aLStack288,(L2CValue *)&local_f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,4);
  lib::L2CValue::operator=(aLStack528,(L2CValue *)&local_f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,4);
  lib::L2CValue::operator=(aLStack576,(L2CValue *)&local_f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
  pLVar8 = (L2CValue *)0x18cdc1683;
  this = (L2CAgent *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  lib::L2CAgent::math_abs(this,pLVar8);
  lib::L2CValue::L2CValue(aLStack608,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack624,0xcd16a7bf2);
  uVar16 = lib::L2CValue::as_integer(aLStack608);
  uVar17 = lib::L2CValue::as_integer(aLStack624);
  fVar19 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar18,uVar16,uVar17);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,fVar19);
  uVar16 = lib::L2CValue::operator<=((L2CValue *)&local_f0,aLStack592);
  lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::~L2CValue(aLStack624);
  lib::L2CValue::~L2CValue(aLStack608);
  if ((uVar16 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,0);
    lib::L2CValue::L2CValue(aLStack608,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT1);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
    iVar7 = lib::L2CValue::as_integer(aLStack608);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar18,iVar5,iVar7);
    lib::L2CValue::~L2CValue(aLStack608);
    lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,0);
    lib::L2CValue::L2CValue(aLStack608,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT2);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
    iVar7 = lib::L2CValue::as_integer(aLStack608);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar18,iVar5,iVar7);
    lib::L2CValue::~L2CValue(aLStack608);
    lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,0);
    lib::L2CValue::L2CValue(aLStack608,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT3);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
    iVar7 = lib::L2CValue::as_integer(aLStack608);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar18,iVar5,iVar7);
    lib::L2CValue::~L2CValue(aLStack608);
    lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,0);
    lib::L2CValue::L2CValue(aLStack608,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT4);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
    iVar7 = lib::L2CValue::as_integer(aLStack608);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar18,iVar5,iVar7);
LAB_71001c7558:
    lib::L2CValue::~L2CValue(aLStack608);
    lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
  }
  else {
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar14,8);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,false);
    uVar16 = lib::L2CValue::operator==(pLVar8,(L2CValue *)&local_f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
    if ((uVar16 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,_SITUATION_KIND_GROUND);
      uVar16 = lib::L2CValue::operator==(aLStack112,(L2CValue *)&local_f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
      if ((uVar16 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_f0,1);
        lib::L2CValue::L2CValue(aLStack608,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT1);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
        iVar7 = lib::L2CValue::as_integer(aLStack608);
        app::lua_bind::WorkModule__add_int_impl(*ppBVar18,iVar5,iVar7);
        lib::L2CValue::~L2CValue(aLStack608);
        lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
        lib::L2CValue::L2CValue(aLStack608,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT1);
        iVar5 = lib::L2CValue::as_integer(aLStack608);
        iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar18,iVar5);
        lib::L2CValue::L2CValue((L2CValue *)&local_f0,iVar5);
        uVar16 = lib::L2CValue::operator<=(aLStack176,(L2CValue *)&local_f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
        lib::L2CValue::~L2CValue(aLStack608);
        if ((uVar16 & 1) != 0) {
          pLVar14 = (L2CValue *)lib::L2CValue::operator[](pLVar14,5);
          pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar14);
          app::FighterSpecializer_Kirby::purin_req_effect_dash_smoke(pBVar9);
          lib::L2CValue::L2CValue((L2CValue *)&local_f0,0);
          lib::L2CValue::L2CValue(aLStack608,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT1)
          ;
          iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
          iVar7 = lib::L2CValue::as_integer(aLStack608);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar18,iVar5,iVar7);
          lib::L2CValue::~L2CValue(aLStack608);
          lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
        }
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,1);
      lib::L2CValue::L2CValue(aLStack608,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT2);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
      iVar7 = lib::L2CValue::as_integer(aLStack608);
      app::lua_bind::WorkModule__add_int_impl(*ppBVar18,iVar5,iVar7);
      lib::L2CValue::~L2CValue(aLStack608);
      lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
      lib::L2CValue::L2CValue(aLStack608,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT2);
      iVar5 = lib::L2CValue::as_integer(aLStack608);
      iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar18,iVar5);
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,iVar5);
      uVar16 = lib::L2CValue::operator<=(aLStack288,(L2CValue *)&local_f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
      lib::L2CValue::~L2CValue(aLStack608);
      if ((uVar16 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_f0,FIGHTER_KIND_KIRBY);
        uVar16 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
        if ((uVar16 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_f0,_FIGHTER_ANIMCMD_EFFECT);
          lib::L2CValue::L2CValue(aLStack608,0x17868e5ba2);
          iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
          HVar15 = lib::L2CValue::as_hash(aLStack608);
          app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar18,iVar5,HVar15,-1);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_f0,_FIGHTER_ANIMCMD_EFFECT);
          lib::L2CValue::L2CValue(aLStack608,0x1cc4feef5a);
          iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
          HVar15 = lib::L2CValue::as_hash(aLStack608);
          app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar18,iVar5,HVar15,-1);
        }
        lib::L2CValue::~L2CValue(aLStack608);
        lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
        lib::L2CValue::L2CValue((L2CValue *)&local_f0,0);
        lib::L2CValue::L2CValue(aLStack608,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT2);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
        iVar7 = lib::L2CValue::as_integer(aLStack608);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar18,iVar5,iVar7);
        lib::L2CValue::~L2CValue(aLStack608);
        lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
      }
      HVar15 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar18);
      lib::L2CValue::L2CValue(aLStack608,HVar15);
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,_FIGHTER_KIND_PURIN);
      uVar16 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
      if ((uVar16 & 1) == 0) {
LAB_71001c7804:
        lib::L2CValue::L2CValue((L2CValue *)&local_f0,FIGHTER_KIND_KIRBY);
        uVar16 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
        if ((uVar16 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_f0,0xf69613122);
          uVar16 = lib::L2CValue::operator==(aLStack608,(L2CValue *)&local_f0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
          if ((uVar16 & 1) != 0) goto LAB_71001c785c;
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_f0,0x915c5de42);
        uVar16 = lib::L2CValue::operator==(aLStack608,(L2CValue *)&local_f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
        if ((uVar16 & 1) == 0) goto LAB_71001c7804;
LAB_71001c785c:
        lib::L2CValue::L2CValue((L2CValue *)&local_f0,1);
        lib::L2CValue::L2CValue(aLStack624,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT3);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
        iVar7 = lib::L2CValue::as_integer(aLStack624);
        app::lua_bind::WorkModule__add_int_impl(*ppBVar18,iVar5,iVar7);
        lib::L2CValue::~L2CValue(aLStack624);
        lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
        lib::L2CValue::L2CValue(aLStack624,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT3);
        iVar5 = lib::L2CValue::as_integer(aLStack624);
        iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar18,iVar5);
        lib::L2CValue::L2CValue((L2CValue *)&local_f0,iVar5);
        uVar16 = lib::L2CValue::operator<=(aLStack528,(L2CValue *)&local_f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
        lib::L2CValue::~L2CValue(aLStack624);
        if ((uVar16 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_f0,FIGHTER_KIND_KIRBY);
          uVar16 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_f0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
          if ((uVar16 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_f0,_FIGHTER_ANIMCMD_EFFECT);
            lib::L2CValue::L2CValue(aLStack624,0x14bd637fee);
            iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
            HVar15 = lib::L2CValue::as_hash(aLStack624);
            app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar18,iVar5,HVar15,-1);
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_f0,_FIGHTER_ANIMCMD_EFFECT);
            lib::L2CValue::L2CValue(aLStack624,0x1902a1a6b1);
            iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
            HVar15 = lib::L2CValue::as_hash(aLStack624);
            app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar18,iVar5,HVar15,-1);
          }
          lib::L2CValue::~L2CValue(aLStack624);
          lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
          lib::L2CValue::L2CValue((L2CValue *)&local_f0,0);
          lib::L2CValue::L2CValue(aLStack624,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT3)
          ;
          iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
          iVar7 = lib::L2CValue::as_integer(aLStack624);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar18,iVar5,iVar7);
          lib::L2CValue::~L2CValue(aLStack624);
          lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
        }
      }
      lib::L2CValue::~L2CValue(aLStack608);
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,1);
      lib::L2CValue::L2CValue(aLStack608,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT4);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
      iVar7 = lib::L2CValue::as_integer(aLStack608);
      app::lua_bind::WorkModule__add_int_impl(*ppBVar18,iVar5,iVar7);
      lib::L2CValue::~L2CValue(aLStack608);
      lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
      lib::L2CValue::L2CValue(aLStack608,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT4);
      iVar5 = lib::L2CValue::as_integer(aLStack608);
      iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar18,iVar5);
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,iVar5);
      uVar16 = lib::L2CValue::operator<=(aLStack576,(L2CValue *)&local_f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
      lib::L2CValue::~L2CValue(aLStack608);
      if ((uVar16 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_f0,FIGHTER_KIND_KIRBY);
        uVar16 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
        if ((uVar16 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_f0,_FIGHTER_ANIMCMD_EFFECT);
          lib::L2CValue::L2CValue(aLStack608,0x1b075bd7f1);
          iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
          HVar15 = lib::L2CValue::as_hash(aLStack608);
          app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar18,iVar5,HVar15,-1);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_f0,_FIGHTER_ANIMCMD_EFFECT);
          lib::L2CValue::L2CValue(aLStack608,0x203133e63f);
          iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
          HVar15 = lib::L2CValue::as_hash(aLStack608);
          app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar18,iVar5,HVar15,-1);
        }
        lib::L2CValue::~L2CValue(aLStack608);
        lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
        lib::L2CValue::L2CValue((L2CValue *)&local_f0,0);
        lib::L2CValue::L2CValue(aLStack608,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT4);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
        iVar7 = lib::L2CValue::as_integer(aLStack608);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar18,iVar5,iVar7);
        goto LAB_71001c7558;
      }
    }
  }
  lib::L2CValue::~L2CValue(aLStack592);
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::~L2CValue(aLStack528);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
LAB_71001c75a0:
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_SPEED);
  iVar5 = lib::L2CValue::as_integer(aLStack144);
  fVar19 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar18,iVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,fVar19);
  lib::L2CValue::L2CValue(aLStack176,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack288,0xcd16a7bf2);
  uVar16 = lib::L2CValue::as_integer(aLStack176);
  uVar17 = lib::L2CValue::as_integer(aLStack288);
  fVar19 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar18,uVar16,uVar17);
  lib::L2CValue::L2CValue(aLStack160,fVar19);
  uVar16 = lib::L2CValue::operator<((L2CValue *)&local_f0,aLStack160);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar16 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,true);
    bVar3 = lib::L2CValue::as_bool((L2CValue *)&local_f0);
    app::lua_bind::ControlModule__stop_rumble_impl(*ppBVar18,(bool)(bVar3 & 1));
    lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,false);
    bVar3 = lib::L2CValue::as_bool((L2CValue *)&local_f0);
    app::lua_bind::ControlModule__stop_rumble_impl(*ppBVar18,(bool)(bVar3 & 1));
    lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
  }
  FUN_71001c5e90(param_1);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

