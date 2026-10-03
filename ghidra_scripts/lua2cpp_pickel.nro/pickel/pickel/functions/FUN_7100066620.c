
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100066620(L2CValue *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  FighterPickelCraftWeaponKind FVar7;
  uint uVar8;
  L2CValue *pLVar9;
  Fighter *pFVar10;
  BattleObjectModuleAccessor *pBVar11;
  Hash40 HVar12;
  ulong uVar13;
  ulong uVar14;
  L2CValue *pLVar15;
  BattleObjectModuleAccessor **ppBVar16;
  float fVar17;
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
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(param_1,false);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_COUNT);
  iVar5 = lib::L2CValue::as_integer(aLStack96);
  iVar6 = lib::L2CValue::as_integer(aLStack112);
  ppBVar16 = (BattleObjectModuleAccessor **)(param_2 + 0x40);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar16,iVar5,iVar6);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
  lib::L2CValue::L2CValue
            (aLStack112,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_CRAFT_WEAPON_MATERIAL_KIND);
  iVar5 = lib::L2CValue::as_integer(aLStack96);
  iVar6 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar16,iVar5,iVar6);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar15 = (L2CValue *)(param_2 + 200);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar15,4);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack112,true);
  pFVar10 = (Fighter *)lib::L2CValue::as_pointer(pLVar9);
  FVar7 = lib::L2CValue::as_integer(aLStack96);
  bVar2 = lib::L2CValue::as_bool(aLStack112);
  app::FighterSpecializer_Pickel::set_have_craft_weapon(pFVar10,FVar7,(bool)(bVar2 & 1));
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x50000000);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_BATTLE_OBJECT_ID);
  iVar5 = lib::L2CValue::as_integer(aLStack96);
  iVar6 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar16,iVar5,iVar6);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar15,5);
  pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar9);
  bVar2 = app::FighterSpecializer_Pickel::init_ground_material(pBVar11);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLAG_MINING);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar16,iVar5);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLAG_MINING_CONTINUAL);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar16,iVar5);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,10000);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_END_FRAME);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    iVar6 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar16,iVar5,iVar6);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_LINK_NO_ARTICLE);
    lib::L2CValue::L2CValue(aLStack112,0x1a56e16f1b);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    HVar12 = lib::L2CValue::as_hash(aLStack112);
    app::lua_bind::LinkModule__send_event_nodes_impl(*ppBVar16,iVar5,HVar12,0);
    lib::L2CValue::~L2CValue(aLStack112);
    lVar1 = -0x50;
    goto LAB_71000677d4;
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLAG_MINING);
  iVar5 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__on_flag_impl(*ppBVar16,iVar5);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar5 = lib::L2CValue::as_integer(aLStack128);
  HVar12 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar16,iVar5);
  lib::L2CValue::L2CValue(aLStack112,HVar12);
  lib::L2CValue::L2CValue(aLStack96,0x7fb997a80);
  uVar13 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar13 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    fVar17 = (float)lib::L2CValue::as_number(aLStack112);
    app::lua_bind::MotionModule__set_rate_partial_impl(*ppBVar16,iVar5,fVar17);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_GROUND_MATERIAL_KIND);
  iVar5 = lib::L2CValue::as_integer(aLStack96);
  iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar16,iVar5);
  lib::L2CValue::L2CValue(aLStack112,iVar5);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack128,0);
  bVar2 = app::FighterSpecializer_Pickel::is_mining_material_table_normal();
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack144,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack160,0x196b135f64);
    uVar13 = lib::L2CValue::as_integer(aLStack144);
    uVar14 = lib::L2CValue::as_integer(aLStack160);
    iVar5 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar16,uVar13,uVar14);
    lib::L2CValue::L2CValue(aLStack96,iVar5);
    lib::L2CValue::operator=(aLStack128,aLStack96);
LAB_7100066b38:
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_GRADE_1);
    uVar13 = lib::L2CValue::operator==(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar13 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack160,0x1496daf962);
      uVar13 = lib::L2CValue::as_integer(aLStack144);
      uVar14 = lib::L2CValue::as_integer(aLStack160);
      iVar5 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar16,uVar13,uVar14);
      lib::L2CValue::L2CValue(aLStack96,iVar5);
      lib::L2CValue::operator=(aLStack128,aLStack96);
      goto LAB_7100066b38;
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_WOOD);
    uVar13 = lib::L2CValue::operator==(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar13 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack160,0x11edaeaa0b);
      uVar13 = lib::L2CValue::as_integer(aLStack144);
      uVar14 = lib::L2CValue::as_integer(aLStack160);
      iVar5 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar16,uVar13,uVar14);
      lib::L2CValue::L2CValue(aLStack96,iVar5);
      lib::L2CValue::operator=(aLStack128,aLStack96);
      goto LAB_7100066b38;
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_STONE);
    uVar13 = lib::L2CValue::operator==(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar13 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack160,0x12bfdb0e0b);
      uVar13 = lib::L2CValue::as_integer(aLStack144);
      uVar14 = lib::L2CValue::as_integer(aLStack160);
      iVar5 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar16,uVar13,uVar14);
      lib::L2CValue::L2CValue(aLStack96,iVar5);
      lib::L2CValue::operator=(aLStack128,aLStack96);
      goto LAB_7100066b38;
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
    uVar13 = lib::L2CValue::operator==(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar13 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack160,0x112d36e138);
      uVar13 = lib::L2CValue::as_integer(aLStack144);
      uVar14 = lib::L2CValue::as_integer(aLStack160);
      iVar5 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar16,uVar13,uVar14);
      lib::L2CValue::L2CValue(aLStack96,iVar5);
      lib::L2CValue::operator=(aLStack128,aLStack96);
      goto LAB_7100066b38;
    }
  }
  lib::L2CValue::L2CValue(aLStack144,1.0);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar15,3);
  uVar8 = lib::L2CValue::as_integer(pLVar9);
  uVar8 = app::sv_battle_object::kind(uVar8);
  lib::L2CValue::L2CValue(aLStack176,uVar8);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_KIND_KIRBY);
  bVar2 = lib::L2CValue::operator==(aLStack176,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
  lib::L2CValue::~L2CValue(aLStack176);
  bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack160);
  if ((bVar3 & 1U) == 0) {
    pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar15,4);
    lib::L2CValue::L2CValue
              (aLStack208,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_CRAFT_WEAPON_KIND);
    iVar5 = lib::L2CValue::as_integer(aLStack208);
    iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar16,iVar5);
    lib::L2CValue::L2CValue(aLStack192,iVar5);
    pFVar10 = (Fighter *)lib::L2CValue::as_pointer(pLVar9);
    FVar7 = lib::L2CValue::as_integer(aLStack192);
    fVar17 = (float)app::FighterSpecializer_Pickel::get_craft_weapon_durability(pFVar10,FVar7);
    lib::L2CValue::L2CValue(aLStack176,fVar17);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    uVar13 = lib::L2CValue::operator<(aLStack96,aLStack176);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack208);
    if ((uVar13 & 1) != 0) goto LAB_7100066c68;
    lib::L2CValue::L2CValue(aLStack176,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack192,0x1a89765685);
    uVar13 = lib::L2CValue::as_integer(aLStack176);
    uVar14 = lib::L2CValue::as_integer(aLStack192);
    fVar17 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar16,uVar13,uVar14);
    lib::L2CValue::L2CValue(aLStack96,fVar17);
    lib::L2CValue::operator=(aLStack144,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
    lib::L2CValue::L2CValue
              (aLStack176,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_CRAFT_WEAPON_MATERIAL_KIND);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    iVar6 = lib::L2CValue::as_integer(aLStack176);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar16,iVar5,iVar6);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack96);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar15,4);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack176,true);
    pFVar10 = (Fighter *)lib::L2CValue::as_pointer(pLVar9);
    FVar7 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = lib::L2CValue::as_bool(aLStack176);
    app::FighterSpecializer_Pickel::set_have_craft_weapon(pFVar10,FVar7,(bool)(bVar2 & 1));
    lib::L2CValue::~L2CValue(aLStack176);
    pLVar9 = aLStack96;
  }
  else {
LAB_7100066c68:
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_PICKEL_MATERIAL_KIND_GRADE_1);
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack160);
    if ((bVar3 & 1U) == 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar15,4);
      lib::L2CValue::L2CValue
                (aLStack208,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_CRAFT_WEAPON_KIND);
      iVar5 = lib::L2CValue::as_integer(aLStack208);
      iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar16,iVar5);
      lib::L2CValue::L2CValue(aLStack192,iVar5);
      pFVar10 = (Fighter *)lib::L2CValue::as_pointer(pLVar9);
      FVar7 = lib::L2CValue::as_integer(aLStack192);
      cVar4 = app::FighterSpecializer_Pickel::get_craft_weapon_material_kind(pFVar10,FVar7);
      lib::L2CValue::L2CValue(aLStack96,(int)cVar4);
      lib::L2CValue::operator=(aLStack176,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack192);
      pLVar9 = aLStack208;
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
      lib::L2CValue::operator=(aLStack176,aLStack96);
      pLVar9 = aLStack96;
    }
    lib::L2CValue::~L2CValue(pLVar9);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_GOLD);
    uVar13 = lib::L2CValue::operator==(aLStack176,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar13 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_WOOD);
      uVar13 = lib::L2CValue::operator==(aLStack176,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar13 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack192,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack208,0x1a1bb90606);
        uVar13 = lib::L2CValue::as_integer(aLStack192);
        uVar14 = lib::L2CValue::as_integer(aLStack208);
        fVar17 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar16,uVar13,uVar14);
        lib::L2CValue::L2CValue(aLStack96,fVar17);
        lib::L2CValue::operator=(aLStack144,aLStack96);
        goto LAB_71000672f8;
      }
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_STONE);
      uVar13 = lib::L2CValue::operator==(aLStack176,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar13 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack192,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack208,0x1b78f1e855);
        uVar13 = lib::L2CValue::as_integer(aLStack192);
        uVar14 = lib::L2CValue::as_integer(aLStack208);
        fVar17 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar16,uVar13,uVar14);
        lib::L2CValue::L2CValue(aLStack96,fVar17);
        lib::L2CValue::operator=(aLStack144,aLStack96);
        goto LAB_71000672f8;
      }
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
      uVar13 = lib::L2CValue::operator==(aLStack176,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar13 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack192,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack208,0x1aa714f1ca);
        uVar13 = lib::L2CValue::as_integer(aLStack192);
        uVar14 = lib::L2CValue::as_integer(aLStack208);
        fVar17 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar16,uVar13,uVar14);
        lib::L2CValue::L2CValue(aLStack96,fVar17);
        lib::L2CValue::operator=(aLStack144,aLStack96);
        goto LAB_71000672f8;
      }
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_DIAMOND);
      uVar13 = lib::L2CValue::operator==(aLStack176,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar13 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack192,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack208,0x1da2122271);
        uVar13 = lib::L2CValue::as_integer(aLStack192);
        uVar14 = lib::L2CValue::as_integer(aLStack208);
        fVar17 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar16,uVar13,uVar14);
        lib::L2CValue::L2CValue(aLStack96,fVar17);
        lib::L2CValue::operator=(aLStack144,aLStack96);
        goto LAB_71000672f8;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack192,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack208,0x1a0a95e89a);
      uVar13 = lib::L2CValue::as_integer(aLStack192);
      uVar14 = lib::L2CValue::as_integer(aLStack208);
      fVar17 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar16,uVar13,uVar14);
      lib::L2CValue::L2CValue(aLStack96,fVar17);
      lib::L2CValue::operator=(aLStack144,aLStack96);
LAB_71000672f8:
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack192);
    }
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_CRAFT_WEAPON_MATERIAL_KIND);
    iVar5 = lib::L2CValue::as_integer(aLStack176);
    iVar6 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar16,iVar5,iVar6);
    lib::L2CValue::~L2CValue(aLStack96);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar15,4);
    lib::L2CValue::L2CValue
              (aLStack192,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_CRAFT_WEAPON_KIND);
    iVar5 = lib::L2CValue::as_integer(aLStack192);
    iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar16,iVar5);
    lib::L2CValue::L2CValue(aLStack96,iVar5);
    pFVar10 = (Fighter *)lib::L2CValue::as_pointer(pLVar9);
    FVar7 = lib::L2CValue::as_integer(aLStack96);
    app::FighterSpecializer_Pickel::set_have_craft_weapon(pFVar10,FVar7,false);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack192);
    pLVar9 = aLStack176;
  }
  lib::L2CValue::~L2CValue(pLVar9);
  lib::L2CValue::L2CValue(aLStack176,false);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar15,5);
  pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar9);
  iVar5 = app::FighterSpecializer_Pickel::get_pickel_stage_dig_status(pBVar11);
  lib::L2CValue::L2CValue(aLStack192,iVar5);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_DIG_RESULT_INVALID);
  uVar13 = lib::L2CValue::operator==(aLStack192,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar13 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_DIG_RESULT_NONE);
    uVar13 = lib::L2CValue::operator==(aLStack192,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar13 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,true);
      lib::L2CValue::operator=(aLStack176,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
    }
  }
  bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack176);
  if ((bVar3 & 1U) == 0) {
    pLVar9 = aLStack144;
    lib::L2CValue::operator*(aLStack128,pLVar9);
    lib::L2CAgent::math_ceil((L2CAgent *)aLStack96,pLVar9);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_END_FRAME);
    iVar5 = lib::L2CValue::as_integer(aLStack208);
    iVar6 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar16,iVar5,iVar6);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              (aLStack240,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_BATTLE_OBJECT_ID);
    iVar5 = lib::L2CValue::as_integer(aLStack240);
    iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar16,iVar5);
    lib::L2CValue::L2CValue(aLStack224,iVar5);
    lib::L2CValue::L2CValue(aLStack96,0x50000000);
    uVar13 = lib::L2CValue::operator==(aLStack224,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack240);
    if ((uVar13 & 1) == 0) {
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLOAT_MINING_BATTLE_OBJECT_HP);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      fVar17 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar16,iVar5);
      lib::L2CValue::L2CValue(aLStack224,fVar17);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack240,1.0);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      uVar13 = lib::L2CValue::operator<(aLStack96,aLStack224);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar13 & 1) != 0) {
        lib::L2CValue::operator/(aLStack224,aLStack208);
        lib::L2CValue::operator=(aLStack240,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
      }
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator+(aLStack240,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLOAT_MINING_DAMAGE_TO_BATTLE_OBJECT);
      fVar17 = (float)lib::L2CValue::as_number(aLStack256);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar16,fVar17,iVar5);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack224);
    }
    lib::L2CValue::L2CValue(aLStack96,_LINK_NO_ARTICLE);
    lib::L2CValue::L2CValue(aLStack224,0x1a56e16f1b);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    HVar12 = lib::L2CValue::as_hash(aLStack224);
    app::lua_bind::LinkModule__send_event_nodes_impl(*ppBVar16,iVar5,HVar12,0);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack96);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar15,5);
    pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar9);
    bVar2 = app::FighterSpecializer_Pickel::check_enable_crack_type(pBVar11);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_GENERATE_ARTICLE_CRACK);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::ArticleModule__generate_article_impl(*ppBVar16,iVar5,false,-1);
      lib::L2CValue::~L2CValue(aLStack96);
      pLVar15 = (L2CValue *)lib::L2CValue::operator[](pLVar15,5);
      pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar15);
      bVar2 = app::FighterSpecializer_Pickel::check_ground_material(pBVar11);
      lib::L2CValue::L2CValue(aLStack272,(bool)(bVar2 & 1));
      lib::L2CValue::~L2CValue(aLStack272);
    }
    pLVar15 = aLStack208;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,-1);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_END_FRAME);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    iVar6 = lib::L2CValue::as_integer(aLStack208);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar16,iVar5,iVar6);
    lib::L2CValue::~L2CValue(aLStack208);
    pLVar15 = aLStack96;
  }
  lib::L2CValue::~L2CValue(pLVar15);
  lib::L2CValue::L2CValue(aLStack96,true);
  lib::L2CValue::operator=(param_1,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lVar1 = -0x60;
LAB_71000677d4:
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  return;
}

