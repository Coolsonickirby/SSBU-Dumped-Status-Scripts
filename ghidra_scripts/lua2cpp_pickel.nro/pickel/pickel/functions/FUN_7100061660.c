
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100061660(L2CAgent *param_1)

{
  BattleObject **this;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  FighterPickelCraftWeaponKind FVar6;
  L2CValue *pLVar7;
  BattleObjectModuleAccessor *pBVar8;
  ulong uVar9;
  Hash40 HVar10;
  Fighter *pFVar11;
  ulong uVar12;
  ulong *this_00;
  BattleObjectModuleAccessor **ppBVar13;
  float fVar14;
  long lVar15;
  L2CValue aLStack704 [16];
  ulong auStack688 [2];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
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
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  ulong local_70;
  ulong uStack104;
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack416,false);
  lib::L2CValue::L2CValue(aLStack432,true);
  lib::L2CValue::L2CValue(aLStack448,false);
  this = &param_1[2].battleObject;
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,5);
  pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
  iVar3 = app::FighterSpecializer_Pickel::get_pickel_stage_dig_status(pBVar8);
  lib::L2CValue::L2CValue(aLStack464,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_DIG_RESULT_INVALID);
  uVar9 = lib::L2CValue::operator==(aLStack464,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar9 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_DIG_RESULT_NONE);
    uVar9 = lib::L2CValue::operator==(aLStack464,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar9 & 1) != 0) goto LAB_710006172c;
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_DIG_RESULT_DIGGING);
    uVar9 = lib::L2CValue::operator==(aLStack464,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar9 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_DIG_RESULT_FINISHED);
      uVar9 = lib::L2CValue::operator==(aLStack464,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar9 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
        lib::L2CValue::operator=(aLStack416,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLAG_MINING)
        ;
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar3);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_60,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLAG_MINING_CONTINUAL);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar3);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
        lib::L2CValue::operator=(aLStack416,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
        lib::L2CValue::operator=(aLStack432,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
        lib::L2CValue::operator=(aLStack448,(L2CValue *)&local_60);
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
      lib::L2CValue::operator=(aLStack416,(L2CValue *)&local_60);
    }
LAB_7100061a98:
    lVar15 = -0x50;
LAB_7100061a9c:
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar15));
  }
  else {
LAB_710006172c:
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    HVar10 = app::lua_bind::MotionModule__motion_kind_partial_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,HVar10);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x7fb997a80);
    uVar9 = lib::L2CValue::operator==((L2CValue *)&local_70,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar9 & 1) != 0) {
LAB_7100061954:
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lVar15 = -0x70;
      goto LAB_7100061a9c;
    }
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLAG_MINING);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue(aLStack144);
      goto LAB_7100061954;
    }
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack160,iVar3);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_END_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack192,iVar3);
    uVar9 = lib::L2CValue::operator<=(aLStack192,aLStack160);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar9 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_END_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,-1);
      uVar9 = lib::L2CValue::operator==((L2CValue *)&local_70,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar9 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
        lib::L2CValue::operator=(aLStack416,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
        lib::L2CValue::operator=(aLStack448,(L2CValue *)&local_60);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
        lib::L2CValue::operator=(aLStack448,(L2CValue *)&local_60);
      }
      goto LAB_7100061a98;
    }
  }
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack416);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack480,_FIGHTER_PICKEL_MATERIAL_KIND_GRADE_1);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,
               _FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_GROUND_MATERIAL_KIND);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    ppBVar13 = &param_1->moduleAccessor;
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar3);
    lib::L2CValue::L2CValue(aLStack496,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue
              (aLStack512,
               _FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_N1_MINING_GRADE_1_TABLE_PROGRESS);
    lib::L2CValue::L2CValue
              (aLStack528,
               _FIGHTER_PICKEL_INSTANCE_WORK_ID_FLAG_SPECIAL_N1_MINING_GOT_RARE_GRADE_1_TABLE);
    bVar1 = app::FighterSpecializer_Pickel::is_mining_material_table_normal();
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,
                 _FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_N1_MINING_NOT_NORMAL_STAGE_TABLE_PROGRESS
                );
      lib::L2CValue::operator=(aLStack512,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,
                 _FIGHTER_PICKEL_INSTANCE_WORK_ID_FLAG_SPECIAL_N1_MINING_GOT_RARE_NOT_NORMAL_STAGE_TABLE
                );
      lib::L2CValue::operator=(aLStack528,(L2CValue *)&local_60);
LAB_7100061bf0:
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_GRADE_1);
      uVar9 = lib::L2CValue::operator==(aLStack496,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar9 & 1) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_60,
                   _FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_N1_MINING_GRADE_1_TABLE_PROGRESS);
        lib::L2CValue::operator=(aLStack512,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_60,
                   _FIGHTER_PICKEL_INSTANCE_WORK_ID_FLAG_SPECIAL_N1_MINING_GOT_RARE_GRADE_1_TABLE);
        lib::L2CValue::operator=(aLStack528,(L2CValue *)&local_60);
        goto LAB_7100061bf0;
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_WOOD);
      uVar9 = lib::L2CValue::operator==(aLStack496,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar9 & 1) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_60,
                   _FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_N1_MINING_WOOD_TABLE_PROGRESS);
        lib::L2CValue::operator=(aLStack512,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_60,
                   _FIGHTER_PICKEL_INSTANCE_WORK_ID_FLAG_SPECIAL_N1_MINING_GOT_RARE_WOOD_TABLE);
        lib::L2CValue::operator=(aLStack528,(L2CValue *)&local_60);
        goto LAB_7100061bf0;
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_STONE);
      uVar9 = lib::L2CValue::operator==(aLStack496,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar9 & 1) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_60,
                   _FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_N1_MINING_STONE_TABLE_PROGRESS);
        lib::L2CValue::operator=(aLStack512,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_60,
                   _FIGHTER_PICKEL_INSTANCE_WORK_ID_FLAG_SPECIAL_N1_MINING_GOT_RARE_STONE_TABLE);
        lib::L2CValue::operator=(aLStack528,(L2CValue *)&local_60);
        goto LAB_7100061bf0;
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
      uVar9 = lib::L2CValue::operator==(aLStack496,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar9 & 1) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_60,
                   _FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_N1_MINING_IRON_TABLE_PROGRESS);
        lib::L2CValue::operator=(aLStack512,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_60,
                   _FIGHTER_PICKEL_INSTANCE_WORK_ID_FLAG_SPECIAL_N1_MINING_GOT_RARE_IRON_TABLE);
        lib::L2CValue::operator=(aLStack528,(L2CValue *)&local_60);
        goto LAB_7100061bf0;
      }
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,4);
    iVar3 = lib::L2CValue::as_integer(aLStack512);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar3);
    pFVar11 = (Fighter *)lib::L2CValue::as_pointer(pLVar7);
    iVar3 = lib::L2CValue::as_integer(aLStack496);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    iVar3 = app::FighterSpecializer_Pickel::get_mining_material_table_result(pFVar11,iVar3,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
    lib::L2CValue::operator=(aLStack480,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,3);
    uVar5 = lib::L2CValue::as_integer(pLVar7);
    uVar5 = app::sv_battle_object::kind(uVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,uVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KIND_KIRBY);
    bVar1 = lib::L2CValue::operator==((L2CValue *)&local_70,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack544,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf899192aa);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0x15a91103da);
    uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    uVar12 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar9,uVar12);
    lib::L2CValue::L2CValue(aLStack560,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack576,false);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack544);
    if ((bVar2 & 1U) == 0) {
      iVar3 = lib::L2CValue::as_integer(aLStack512);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar3);
      lib::L2CValue::L2CValue(aLStack128,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,1);
      lib::L2CValue::operator+(aLStack128,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue(aLStack128);
      iVar3 = lib::L2CValue::as_integer(aLStack512);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar3);
      lib::L2CValue::L2CValue(aLStack144,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,1);
      lib::L2CValue::operator-(aLStack144,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
      uVar9 = lib::L2CValue::operator<((L2CValue *)&local_70,aLStack560);
      if ((uVar9 & 1) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,4);
        pFVar11 = (Fighter *)lib::L2CValue::as_pointer(pLVar7);
        iVar3 = lib::L2CValue::as_integer(aLStack496);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        iVar3 = app::FighterSpecializer_Pickel::get_mining_material_table_result
                          (pFVar11,iVar3,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
        lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
      uVar9 = lib::L2CValue::operator<=((L2CValue *)&local_60,aLStack128);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar9 & 1) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,4);
        pFVar11 = (Fighter *)lib::L2CValue::as_pointer(pLVar7);
        iVar3 = lib::L2CValue::as_integer(aLStack496);
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        iVar3 = app::FighterSpecializer_Pickel::get_mining_material_table_result
                          (pFVar11,iVar3,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
        lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      }
      lib::L2CValue::L2CValue(aLStack176,false);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_GRADE_1);
      uVar9 = lib::L2CValue::operator==(aLStack496,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar9 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_WOOD);
        uVar9 = lib::L2CValue::operator==(aLStack496,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar9 & 1) != 0) goto LAB_7100061fd8;
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_STONE);
        uVar9 = lib::L2CValue::operator==(aLStack496,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar9 & 1) != 0) goto LAB_7100061fd8;
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
        uVar9 = lib::L2CValue::operator==(aLStack496,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar9 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_GOLD);
          uVar9 = lib::L2CValue::operator<=((L2CValue *)&local_60,aLStack144);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          if ((uVar9 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
            lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          }
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_GOLD);
          uVar9 = lib::L2CValue::operator<=((L2CValue *)&local_60,aLStack480);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          if ((uVar9 & 1) == 0) goto LAB_7100062070;
          lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
          lib::L2CValue::operator=(aLStack576,(L2CValue *)&local_60);
          goto LAB_7100062068;
        }
      }
      else {
LAB_7100061fd8:
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
        uVar9 = lib::L2CValue::operator<=((L2CValue *)&local_60,aLStack144);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar9 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
          lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        }
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
        uVar9 = lib::L2CValue::operator<=((L2CValue *)&local_60,aLStack480);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar9 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
          lib::L2CValue::operator=(aLStack576,(L2CValue *)&local_60);
LAB_7100062068:
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        }
      }
LAB_7100062070:
      iVar3 = lib::L2CValue::as_integer(aLStack528);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar3);
      lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
      uVar9 = lib::L2CValue::operator==(aLStack192,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue(aLStack192);
      if ((uVar9 & 1) == 0) {
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack576);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::operator=(aLStack480,aLStack160);
        }
      }
      else {
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack176);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
          uVar9 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          if ((uVar9 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf899192aa);
            lib::L2CValue::L2CValue(aLStack208,0x1c4b8e19e5);
            uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            uVar12 = lib::L2CValue::as_integer(aLStack208);
            fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar9,uVar12);
            lib::L2CValue::L2CValue(aLStack192,fVar14);
            lib::L2CValue::~L2CValue(aLStack208);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue(aLStack224,0x77a08c3fc);
            HVar10 = lib::L2CValue::as_hash(aLStack224);
            fVar14 = (float)app::sv_math::randf(HVar10,1.0);
            lib::L2CValue::L2CValue(aLStack208,fVar14);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0.01);
            lib::L2CValue::operator*(aLStack192,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            uVar9 = lib::L2CValue::operator<(aLStack208,aLStack240);
            lib::L2CValue::~L2CValue(aLStack240);
            lib::L2CValue::~L2CValue(aLStack208);
            lib::L2CValue::~L2CValue(aLStack224);
            if ((uVar9 & 1) != 0) {
              lib::L2CValue::operator=(aLStack480,aLStack144);
              iVar3 = lib::L2CValue::as_integer(aLStack528);
              app::lua_bind::WorkModule__on_flag_impl(*ppBVar13,iVar3);
            }
            lib::L2CValue::~L2CValue(aLStack192);
            goto LAB_7100062454;
          }
        }
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack576);
        if ((bVar2 & 1U) != 0) {
          iVar3 = lib::L2CValue::as_integer(aLStack528);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar13,iVar3);
        }
      }
LAB_7100062454:
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_RED_STONE);
      uVar9 = lib::L2CValue::operator==(aLStack480,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar9 & 1) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,5);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_GRADE_1);
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        iVar3 = app::FighterSpecializer_Pickel::get_material_num(pBVar8,iVar3);
        lib::L2CValue::L2CValue(aLStack192,iVar3);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,5);
        lib::L2CValue::L2CValue(aLStack224,_FIGHTER_PICKEL_MATERIAL_KIND_WOOD);
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
        iVar3 = lib::L2CValue::as_integer(aLStack224);
        iVar3 = app::FighterSpecializer_Pickel::get_material_num(pBVar8,iVar3);
        lib::L2CValue::L2CValue(aLStack208,iVar3);
        lib::L2CValue::operator+(aLStack192,aLStack208);
        lib::L2CValue::operator=(aLStack192,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack224);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,5);
        lib::L2CValue::L2CValue(aLStack224,_FIGHTER_PICKEL_MATERIAL_KIND_STONE);
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
        iVar3 = lib::L2CValue::as_integer(aLStack224);
        iVar3 = app::FighterSpecializer_Pickel::get_material_num(pBVar8,iVar3);
        lib::L2CValue::L2CValue(aLStack208,iVar3);
        lib::L2CValue::operator+(aLStack192,aLStack208);
        lib::L2CValue::operator=(aLStack192,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack224);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,5);
        lib::L2CValue::L2CValue(aLStack224,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
        iVar3 = lib::L2CValue::as_integer(aLStack224);
        iVar3 = app::FighterSpecializer_Pickel::get_material_num(pBVar8,iVar3);
        lib::L2CValue::L2CValue(aLStack208,iVar3);
        lib::L2CValue::operator+(aLStack192,aLStack208);
        lib::L2CValue::operator=(aLStack192,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack224,0x25dff2e4bf);
        uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        uVar12 = lib::L2CValue::as_integer(aLStack224);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar9,uVar12);
        lib::L2CValue::L2CValue(aLStack208,iVar3);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        uVar9 = lib::L2CValue::operator<=(aLStack192,aLStack208);
        if ((uVar9 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
          lib::L2CValue::operator=(aLStack480,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        }
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack192);
      }
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lVar15 = -0x60;
LAB_7100062724:
      lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar15));
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
      uVar9 = lib::L2CValue::operator<((L2CValue *)&local_60,aLStack480);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar9 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
        lib::L2CValue::operator=(aLStack480,(L2CValue *)&local_60);
        lVar15 = -0x50;
        goto LAB_7100062724;
      }
    }
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_BATTLE_OBJECT_ID);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x50000000);
    uVar9 = lib::L2CValue::operator==((L2CValue *)&local_70,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar9 & 1) == 0) {
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::~L2CValue(aLStack128);
LAB_71000627f4:
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
      lib::L2CValue::operator=(aLStack480,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLAG_MINING_PICKELOBJECT)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((bVar2 & 1U) != 0) goto LAB_71000627f4;
    }
    lib::L2CValue::L2CValue(aLStack592,0);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_GRADE_1);
    uVar9 = lib::L2CValue::operator==(aLStack480,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar9 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_WOOD);
      uVar9 = lib::L2CValue::operator==(aLStack480,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar9 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack128,0x13b3b60294);
        uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        uVar12 = lib::L2CValue::as_integer(aLStack128);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar9,uVar12);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
        lib::L2CValue::operator=(aLStack592,(L2CValue *)&local_60);
        goto LAB_7100062c2c;
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_STONE);
      uVar9 = lib::L2CValue::operator==(aLStack480,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar9 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack128,0x14620d3710);
        uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        uVar12 = lib::L2CValue::as_integer(aLStack128);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar9,uVar12);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
        lib::L2CValue::operator=(aLStack592,(L2CValue *)&local_60);
        goto LAB_7100062c2c;
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
      uVar9 = lib::L2CValue::operator==(aLStack480,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar9 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack128,0x13a6d33f24);
        uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        uVar12 = lib::L2CValue::as_integer(aLStack128);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar9,uVar12);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
        lib::L2CValue::operator=(aLStack592,(L2CValue *)&local_60);
        goto LAB_7100062c2c;
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_GOLD);
      uVar9 = lib::L2CValue::operator==(aLStack480,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar9 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack128,0x135499546b);
        uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        uVar12 = lib::L2CValue::as_integer(aLStack128);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar9,uVar12);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
        lib::L2CValue::operator=(aLStack592,(L2CValue *)&local_60);
        goto LAB_7100062c2c;
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_RED_STONE);
      uVar9 = lib::L2CValue::operator==(aLStack480,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar9 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack128,0x18aea4f39d);
        uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        uVar12 = lib::L2CValue::as_integer(aLStack128);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar9,uVar12);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
        lib::L2CValue::operator=(aLStack592,(L2CValue *)&local_60);
        goto LAB_7100062c2c;
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_DIAMOND);
      uVar9 = lib::L2CValue::operator==(aLStack480,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar9 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack128,0x160dee4b92);
        uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        uVar12 = lib::L2CValue::as_integer(aLStack128);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar9,uVar12);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
        lib::L2CValue::operator=(aLStack592,(L2CValue *)&local_60);
        goto LAB_7100062c2c;
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack128,0x16f5eba940);
      uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      uVar12 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar9,uVar12);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
      lib::L2CValue::operator=(aLStack592,(L2CValue *)&local_60);
LAB_7100062c2c:
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
    uVar9 = lib::L2CValue::operator==(aLStack480,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar9 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,5);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
      iVar3 = lib::L2CValue::as_integer(aLStack480);
      iVar3 = app::FighterSpecializer_Pickel::get_material_num(pBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack608,iVar3);
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,5);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
      iVar3 = lib::L2CValue::as_integer(aLStack480);
      iVar4 = lib::L2CValue::as_integer(aLStack592);
      app::FighterSpecializer_Pickel::add_material_num(pBVar8,iVar3,iVar4);
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,5);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
      iVar3 = lib::L2CValue::as_integer(aLStack480);
      iVar3 = app::FighterSpecializer_Pickel::get_material_num(pBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack624,iVar3);
      uVar9 = lib::L2CValue::operator<=(aLStack608,aLStack624);
      if ((uVar9 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_ANIMCMD_EFFECT);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1371600ae3);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        HVar10 = lib::L2CValue::as_hash((L2CValue *)&local_70);
        app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar13,iVar3,HVar10,-1);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_LINK_NO_ARTICLE);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0x2280e3155a);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        HVar10 = lib::L2CValue::as_hash((L2CValue *)&local_70);
        app::lua_bind::LinkModule__send_event_nodes_impl(*ppBVar13,iVar3,HVar10,0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue(aLStack640,aLStack480);
        lib::L2CValue::L2CValue(aLStack656,aLStack432);
        lib::L2CValue::L2CValue(aLStack128,-1);
        lib::L2CValue::L2CValue(aLStack144,0x16cc49483c);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_GRADE_1);
        uVar9 = lib::L2CValue::operator==(aLStack640,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar9 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_WOOD);
          uVar9 = lib::L2CValue::operator==(aLStack640,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          if ((uVar9 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0x10fa09fb67);
            lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1650aec320);
            lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
LAB_71000632fc:
            lVar15 = -0x50;
            goto LAB_7100063300;
          }
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_STONE);
          uVar9 = lib::L2CValue::operator==(aLStack640,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          if ((uVar9 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0x11b481198e);
            lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0x175c936a85);
            lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
            goto LAB_71000632fc;
          }
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
          uVar9 = lib::L2CValue::operator==(aLStack640,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          if ((uVar9 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0x10bee402f6);
            lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1614433ab1);
            lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
            goto LAB_71000632fc;
          }
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_GOLD);
          uVar9 = lib::L2CValue::operator==(aLStack640,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          if ((uVar9 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0x10813dff3b);
            lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0x162b9ac77c);
            lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
            goto LAB_71000632fc;
          }
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_RED_STONE);
          uVar9 = lib::L2CValue::operator==(aLStack640,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          if ((uVar9 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0x148769ae8f);
            lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1a7c971afb);
            lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
            goto LAB_71000632fc;
          }
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_DIAMOND);
          uVar9 = lib::L2CValue::operator==(aLStack640,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          if ((uVar9 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0x138c307f4f);
            lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0x19a6c86e10);
            lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
            goto LAB_71000632fc;
          }
        }
        else {
          iVar3 = app::FighterSpecializer_Pickel::get_mining_material_grade1_kind();
          lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_GRADE_1_KIND_SAND);
          uVar9 = lib::L2CValue::operator==((L2CValue *)&local_70,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          if ((uVar9 & 1) == 0) {
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_GRADE_1_KIND_SOIL);
            uVar9 = lib::L2CValue::operator==((L2CValue *)&local_70,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            if ((uVar9 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_60,0x102dea4384);
              lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_60);
              lib::L2CValue::~L2CValue((L2CValue *)&local_60);
              lib::L2CValue::L2CValue((L2CValue *)&local_60,0x16874d7bc3);
              lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
              goto LAB_7100063200;
            }
            lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_GRADE_1_KIND_ICE)
            ;
            uVar9 = lib::L2CValue::operator==((L2CValue *)&local_70,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            if ((uVar9 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf53745c34);
              lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_60);
              lib::L2CValue::~L2CValue((L2CValue *)&local_60);
              lib::L2CValue::L2CValue((L2CValue *)&local_60,0x15fe00445a);
              lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
              goto LAB_7100063200;
            }
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_GRADE_1_KIND_WOOL);
            uVar9 = lib::L2CValue::operator==((L2CValue *)&local_70,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            if ((uVar9 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_60,0x10f4d27355);
              lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_60);
              lib::L2CValue::~L2CValue((L2CValue *)&local_60);
              lib::L2CValue::L2CValue((L2CValue *)&local_60,0x165e754b12);
              lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
              goto LAB_7100063200;
            }
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1066ee707b);
            lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0x16cc49483c);
            lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
LAB_7100063200:
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          }
          lVar15 = -0x60;
LAB_7100063300:
          lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar15));
        }
        lib::L2CValue::L2CValue((L2CValue *)&local_60,-1);
        uVar9 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar9 & 1) == 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_60,
                     _FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_ICON_EFFECT_OFFSET);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar3);
          lib::L2CValue::L2CValue(aLStack160,iVar3);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::L2CValue
                    (aLStack176,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_ICON_EFFECT_FRAME);
          iVar3 = lib::L2CValue::as_integer(aLStack176);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
          uVar9 = lib::L2CValue::operator<((L2CValue *)&local_60,(L2CValue *)&local_70);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::~L2CValue(aLStack176);
          if ((uVar9 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_70,
                       _FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_ICON_EFFECT_OFFSET);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar3,iVar4);
            lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,1);
            lib::L2CValue::operator+(aLStack160,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_70);
            lib::L2CValue::~L2CValue((L2CValue *)&local_70);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,3);
            uVar9 = lib::L2CValue::operator<=((L2CValue *)&local_60,aLStack160);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            if ((uVar9 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
              lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_60);
              lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            }
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_60,
                       _FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_ICON_EFFECT_OFFSET);
            iVar3 = lib::L2CValue::as_integer(aLStack160);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar3,iVar4);
          }
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0xf899192aa);
          lib::L2CValue::L2CValue(aLStack176,0x1882792058);
          uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          uVar12 = lib::L2CValue::as_integer(aLStack176);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar9,uVar12);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
          lib::L2CValue::L2CValue
                    (aLStack192,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_ICON_EFFECT_FRAME);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          iVar4 = lib::L2CValue::as_integer(aLStack192);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar3,iVar4);
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue(aLStack176);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
          uVar9 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          if ((uVar9 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,1);
            uVar9 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            if ((uVar9 & 1) == 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_70,0xf899192aa);
              lib::L2CValue::L2CValue(aLStack192,0x16d9a107c8);
              uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_70);
              uVar12 = lib::L2CValue::as_integer(aLStack192);
              fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                        (*ppBVar13,uVar9,uVar12);
              lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar14);
              lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_60);
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)&local_70,0xf899192aa);
              lib::L2CValue::L2CValue(aLStack192,0x16aea6375e);
              uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_70);
              uVar12 = lib::L2CValue::as_integer(aLStack192);
              fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                        (*ppBVar13,uVar9,uVar12);
              lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar14);
              lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_60);
            }
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_70,0xf899192aa);
            lib::L2CValue::L2CValue(aLStack192,0x1637af66e4);
            uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_70);
            uVar12 = lib::L2CValue::as_integer(aLStack192);
            fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar9,uVar12);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar14);
            lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_60);
          }
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue(aLStack224,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLOAT_MINING_POS_X);
          iVar3 = lib::L2CValue::as_integer(aLStack224);
          fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar3);
          lib::L2CValue::L2CValue(aLStack208,fVar14);
          lib::L2CValue::L2CValue(aLStack272,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLOAT_MINING_POS_Y);
          iVar3 = lib::L2CValue::as_integer(aLStack272);
          fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar3);
          lib::L2CValue::L2CValue(aLStack256,fVar14);
          lib::L2CValue::operator+(aLStack256,aLStack176);
          lib::L2CValue::L2CValue(aLStack304,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLOAT_MINING_POS_Z);
          iVar3 = lib::L2CValue::as_integer(aLStack304);
          fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar3);
          lib::L2CValue::L2CValue(aLStack288,fVar14);
          lib::L2CValue::L2CValue(aLStack320,0.0);
          lib::L2CValue::L2CValue(aLStack336,0.0);
          lib::L2CValue::L2CValue(aLStack352,0.0);
          lib::L2CValue::L2CValue(aLStack368,1.0);
          lib::L2CValue::L2CValue(aLStack384,0);
          lib::L2CValue::L2CValue(aLStack400,-1);
          HVar10 = lib::L2CValue::as_hash(aLStack128);
          uVar9 = lib::L2CValue::as_number(aLStack208);
          lVar15 = lib::L2CValue::as_number(aLStack240);
          uVar5 = lib::L2CValue::as_number(aLStack288);
          local_60 = uVar9 & 0xffffffff | lVar15 << 0x20;
          uStack88 = (ulong)uVar5;
          uVar9 = lib::L2CValue::as_number(aLStack320);
          lVar15 = lib::L2CValue::as_number(aLStack336);
          uVar5 = lib::L2CValue::as_number(aLStack352);
          local_70 = uVar9 & 0xffffffff | lVar15 << 0x20;
          uStack104 = (ulong)uVar5;
          fVar14 = (float)lib::L2CValue::as_number(aLStack368);
          uVar5 = lib::L2CValue::as_integer(aLStack384);
          iVar3 = lib::L2CValue::as_integer(aLStack400);
          uVar5 = app::lua_bind::EffectModule__req_impl
                            (*ppBVar13,HVar10,(Vector3f *)&local_60,(Vector3f *)&local_70,fVar14,
                             uVar5,iVar3,false,0);
          lib::L2CValue::L2CValue(aLStack192,uVar5);
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::~L2CValue(aLStack400);
          lib::L2CValue::~L2CValue(aLStack384);
          lib::L2CValue::~L2CValue(aLStack368);
          lib::L2CValue::~L2CValue(aLStack352);
          lib::L2CValue::~L2CValue(aLStack336);
          lib::L2CValue::~L2CValue(aLStack320);
          lib::L2CValue::~L2CValue(aLStack288);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack256);
          lib::L2CValue::~L2CValue(aLStack272);
          lib::L2CValue::~L2CValue(aLStack208);
          lib::L2CValue::~L2CValue(aLStack224);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack160);
        }
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack656);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_ANIMCMD_SOUND);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          HVar10 = lib::L2CValue::as_hash(aLStack144);
          app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar13,iVar3,HVar10,-1);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        }
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack656);
        lib::L2CValue::~L2CValue(aLStack640);
        uVar9 = lib::L2CValue::operator<(aLStack608,aLStack624);
        if ((uVar9 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)auStack688,aLStack480);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,-1);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_GRADE_1);
          uVar9 = lib::L2CValue::operator==((L2CValue *)auStack688,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          if ((uVar9 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_WOOD);
            uVar9 = lib::L2CValue::operator==((L2CValue *)auStack688,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            if ((uVar9 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_60,0x158697fcf2);
              lib::L2CValue::operator=((L2CValue *)&local_70,(L2CValue *)&local_60);
LAB_7100063df4:
              lVar15 = -0x50;
              goto LAB_7100063df8;
            }
            lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_STONE);
            uVar9 = lib::L2CValue::operator==((L2CValue *)auStack688,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            if ((uVar9 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_60,0x165ef9f85c);
              lib::L2CValue::operator=((L2CValue *)&local_70,(L2CValue *)&local_60);
              goto LAB_7100063df4;
            }
            lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
            uVar9 = lib::L2CValue::operator==((L2CValue *)auStack688,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            if ((uVar9 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_60,0x15a4b0628d);
              lib::L2CValue::operator=((L2CValue *)&local_70,(L2CValue *)&local_60);
              goto LAB_7100063df4;
            }
            lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_GOLD);
            uVar9 = lib::L2CValue::operator==((L2CValue *)auStack688,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            if ((uVar9 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_60,0x151bbfa41e);
              lib::L2CValue::operator=((L2CValue *)&local_70,(L2CValue *)&local_60);
              goto LAB_7100063df4;
            }
            lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_RED_STONE);
            uVar9 = lib::L2CValue::operator==((L2CValue *)auStack688,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            if ((uVar9 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_60,0x19b0a643e7);
              lib::L2CValue::operator=((L2CValue *)&local_70,(L2CValue *)&local_60);
              goto LAB_7100063df4;
            }
            lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_DIAMOND);
            uVar9 = lib::L2CValue::operator==((L2CValue *)auStack688,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            if ((uVar9 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1847c2b934);
              lib::L2CValue::operator=((L2CValue *)&local_70,(L2CValue *)&local_60);
              goto LAB_7100063df4;
            }
          }
          else {
            iVar3 = app::FighterSpecializer_Pickel::get_mining_material_grade1_kind();
            lib::L2CValue::L2CValue(aLStack128,iVar3);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_GRADE_1_KIND_SAND);
            uVar9 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            if ((uVar9 & 1) == 0) {
              lib::L2CValue::L2CValue
                        ((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_GRADE_1_KIND_SOIL);
              uVar9 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_60);
              lib::L2CValue::~L2CValue((L2CValue *)&local_60);
              if ((uVar9 & 1) != 0) {
                lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1554f81aa9);
                lib::L2CValue::operator=((L2CValue *)&local_70,(L2CValue *)&local_60);
                goto LAB_7100063d48;
              }
              lib::L2CValue::L2CValue
                        ((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_GRADE_1_KIND_ICE);
              uVar9 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_60);
              lib::L2CValue::~L2CValue((L2CValue *)&local_60);
              if ((uVar9 & 1) != 0) {
                lib::L2CValue::L2CValue((L2CValue *)&local_60,0x140a7494f6);
                lib::L2CValue::operator=((L2CValue *)&local_70,(L2CValue *)&local_60);
                goto LAB_7100063d48;
              }
              lib::L2CValue::L2CValue
                        ((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_GRADE_1_KIND_WOOL);
              uVar9 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_60);
              lib::L2CValue::~L2CValue((L2CValue *)&local_60);
              if ((uVar9 & 1) != 0) {
                lib::L2CValue::L2CValue((L2CValue *)&local_60,0x156ac47e9f);
                lib::L2CValue::operator=((L2CValue *)&local_70,(L2CValue *)&local_60);
                goto LAB_7100063d48;
              }
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)&local_60,0x156886b478);
              lib::L2CValue::operator=((L2CValue *)&local_70,(L2CValue *)&local_60);
LAB_7100063d48:
              lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            }
            lVar15 = -0x70;
LAB_7100063df8:
            lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar15));
          }
          lib::L2CValue::L2CValue((L2CValue *)&local_60,-1);
          uVar9 = lib::L2CValue::operator==((L2CValue *)&local_70,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          if ((uVar9 & 1) == 0) {
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_60,
                       _FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_AWAY_EFFECT_KIND);
            lVar15 = lib::L2CValue::as_integer((L2CValue *)&local_70);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar13,lVar15,iVar3);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_ANIMCMD_EFFECT);
            lib::L2CValue::L2CValue(aLStack128,0x1ad8ba0f94);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            HVar10 = lib::L2CValue::as_hash(aLStack128);
            app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar13,iVar3,HVar10,-1);
            lib::L2CValue::~L2CValue(aLStack128);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          }
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          this_00 = auStack688;
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0x20cbc92683);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,1);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LOG_DATA_INT_ATTACK_NUM_KIND);
          lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_01 + -1);
          lib::L2CAgent::clear_lua_stack(param_1);
          lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_60);
          lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_70);
          lib::L2CAgent::push_lua_stack(param_1,aLStack128);
          lib::L2CAgent::push_lua_stack(param_1,aLStack144);
          app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
          lib::L2CAgent::pop_lua_stack(param_1,1);
          lib::L2CValue::~L2CValue(aLStack672);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          this_00 = &local_60;
        }
        lib::L2CValue::~L2CValue((L2CValue *)this_00);
      }
      lib::L2CValue::~L2CValue(aLStack624);
      lib::L2CValue::~L2CValue(aLStack608);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    uVar9 = lib::L2CValue::operator==(aLStack544,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar9 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_BATTLE_OBJECT_ID);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x50000000);
      uVar9 = lib::L2CValue::operator==((L2CValue *)&local_70,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar9 & 1) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_70,
                   _FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_CRAFT_WEAPON_KIND);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack144,0x20b62f741b);
        uVar9 = lib::L2CValue::as_integer(aLStack128);
        uVar12 = lib::L2CValue::as_integer(aLStack144);
        fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar9,uVar12);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar14);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,4);
        pFVar11 = (Fighter *)lib::L2CValue::as_pointer(pLVar7);
        FVar6 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
        app::FighterSpecializer_Pickel::sub_craft_weapon_durability(pFVar11,FVar6,fVar14);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      }
    }
    iVar3 = lib::L2CValue::as_integer(aLStack512);
    app::lua_bind::WorkModule__inc_int_impl(*ppBVar13,iVar3);
    iVar3 = lib::L2CValue::as_integer(aLStack512);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
    uVar9 = lib::L2CValue::operator<=(aLStack560,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar9 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      iVar4 = lib::L2CValue::as_integer(aLStack512);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar3,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    uVar9 = lib::L2CValue::operator==(aLStack544,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if (((uVar9 & 1) != 0) &&
       (bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack576), (bVar2 & 1U) != 0)) {
      iVar3 = lib::L2CValue::as_integer(aLStack528);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar13,iVar3);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_PICKEL_GENERATE_ARTICLE_CRACK);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl(*ppBVar13,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_GENERATE_ARTICLE_CRACK);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::ArticleModule__remove_impl(*ppBVar13,iVar3,0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x50000000);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_BATTLE_OBJECT_ID);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar3,iVar4);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue(aLStack592);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::~L2CValue(aLStack560);
    lib::L2CValue::~L2CValue(aLStack544);
    lib::L2CValue::~L2CValue(aLStack528);
    lib::L2CValue::~L2CValue(aLStack512);
    lib::L2CValue::~L2CValue(aLStack496);
    lib::L2CValue::~L2CValue(aLStack480);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_70,CONTROL_PAD_BUTTON_SPECIAL);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  bVar1 = app::lua_bind::ControlModule__check_button_on_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lVar15 = -0x60;
  }
  else {
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack448);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    if ((bVar2 & 1U) == 0) goto LAB_71000642d8;
    FUN_7100066620(aLStack704,param_1);
    lib::L2CValue::~L2CValue(aLStack704);
    FUN_7100067f30(param_1);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLAG_MINING_CONTINUAL);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar3);
    lVar15 = -0x50;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar15));
LAB_71000642d8:
  lib::L2CValue::~L2CValue(aLStack464);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue(aLStack416);
  return;
}

