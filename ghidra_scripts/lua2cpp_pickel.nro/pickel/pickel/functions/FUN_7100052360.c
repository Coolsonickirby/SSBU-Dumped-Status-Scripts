
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100052360(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6)

{
  BattleObject **this;
  int iVar1;
  int iVar2;
  L2CValue *pLVar3;
  BattleObjectModuleAccessor *pBVar4;
  ulong uVar5;
  Hash40 HVar6;
  ulong uVar7;
  Vector2f VVar8;
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [24];
  
  lib::L2CValue::L2CValue(param_1,false);
  this = &param_2[2].battleObject;
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,5);
  pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
  iVar1 = lib::L2CValue::as_integer(param_3);
  iVar1 = app::FighterSpecializer_Pickel::get_material_num(pBVar4,iVar1);
  lib::L2CValue::L2CValue(aLStack168,iVar1);
  lib::L2CValue::L2CValue(aLStack200,param_3);
  FUN_7100052b70(aLStack184,param_2,aLStack200);
  lib::L2CValue::~L2CValue(aLStack200);
  lib::L2CValue::L2CValue(aLStack120,0);
  uVar5 = lib::L2CValue::operator<(aLStack120,aLStack184);
  lib::L2CValue::~L2CValue(aLStack120);
  if (((uVar5 & 1) == 0) ||
     (uVar5 = lib::L2CValue::operator<=(aLStack184,aLStack168), (uVar5 & 1) == 0))
  goto LAB_71000529c4;
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,5);
  pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
  iVar1 = lib::L2CValue::as_integer(param_3);
  iVar2 = lib::L2CValue::as_integer(aLStack184);
  app::FighterSpecializer_Pickel::sub_material_num(pBVar4,iVar1,iVar2);
  lib::L2CValue::L2CValue
            (aLStack120,_FIGHTER_PICKEL_STATUS_SPECIAL_N3_INT_GENERATE_PICKELOBJECT_KIND);
  iVar1 = lib::L2CValue::as_integer(param_3);
  iVar2 = lib::L2CValue::as_integer(aLStack120);
  app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack216,param_3);
  lib::L2CValue::L2CValue(aLStack136,0x192d57fc22);
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_MATERIAL_KIND_GRADE_1);
  uVar5 = lib::L2CValue::operator==(aLStack216,aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_MATERIAL_KIND_WOOD);
    uVar5 = lib::L2CValue::operator==(aLStack216,aLStack120);
    lib::L2CValue::~L2CValue(aLStack120);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack120,0x19b1b0773e);
      lib::L2CValue::operator=(aLStack136,aLStack120);
LAB_7100052698:
      pLVar3 = aLStack120;
      goto LAB_7100052748;
    }
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_MATERIAL_KIND_STONE);
    uVar5 = lib::L2CValue::operator==(aLStack216,aLStack120);
    lib::L2CValue::~L2CValue(aLStack120);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack120,0x1aa67d4952);
      lib::L2CValue::operator=(aLStack136,aLStack120);
      goto LAB_7100052698;
    }
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
    uVar5 = lib::L2CValue::operator==(aLStack216,aLStack120);
    lib::L2CValue::~L2CValue(aLStack120);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack120,0x19f55d8eaf);
      lib::L2CValue::operator=(aLStack136,aLStack120);
      goto LAB_7100052698;
    }
  }
  else {
    iVar1 = app::FighterSpecializer_Pickel::get_mining_material_grade1_kind();
    lib::L2CValue::L2CValue(aLStack152,iVar1);
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_MATERIAL_GRADE_1_KIND_SAND);
    uVar5 = lib::L2CValue::operator==(aLStack152,aLStack120);
    lib::L2CValue::~L2CValue(aLStack120);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_MATERIAL_GRADE_1_KIND_SOIL);
      uVar5 = lib::L2CValue::operator==(aLStack152,aLStack120);
      lib::L2CValue::~L2CValue(aLStack120);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack120,0x196653cfdd);
        lib::L2CValue::operator=(aLStack136,aLStack120);
        goto LAB_710005273c;
      }
      lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_MATERIAL_GRADE_1_KIND_ICE);
      uVar5 = lib::L2CValue::operator==(aLStack152,aLStack120);
      lib::L2CValue::~L2CValue(aLStack120);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack120,0x18ee2c4211);
        lib::L2CValue::operator=(aLStack136,aLStack120);
        goto LAB_710005273c;
      }
      lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_MATERIAL_GRADE_1_KIND_WOOL);
      uVar5 = lib::L2CValue::operator==(aLStack152,aLStack120);
      lib::L2CValue::~L2CValue(aLStack120);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack120,0x19bf6bff0c);
        lib::L2CValue::operator=(aLStack136,aLStack120);
        goto LAB_710005273c;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack120,0x192d57fc22);
      lib::L2CValue::operator=(aLStack136,aLStack120);
LAB_710005273c:
      lib::L2CValue::~L2CValue(aLStack120);
    }
    pLVar3 = aLStack152;
LAB_7100052748:
    lib::L2CValue::~L2CValue(pLVar3);
  }
  lib::L2CValue::L2CValue(aLStack120,_ITEM_ANIMCMD_KIND_SOUND);
  iVar1 = lib::L2CValue::as_integer(aLStack120);
  HVar6 = lib::L2CValue::as_hash(aLStack136);
  app::lua_bind::MotionAnimcmdModule__call_script_single_impl
            (param_2->moduleAccessor,iVar1,HVar6,-1);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::~L2CValue(aLStack136);
  lib::L2CValue::~L2CValue(aLStack216);
  lib::L2CValue::L2CValue(aLStack120,false);
  uVar5 = lib::L2CValue::operator==(param_4,aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  if ((uVar5 & 1) == 0) {
    VVar8 = (Vector2f)0x5;
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,5);
    pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
    lib::L2CValue::as_number(param_5);
    lib::L2CValue::as_number(param_6);
    app::FighterSpecializer_Pickel::reset_pickelobject_status(pBVar4,VVar8);
  }
  else {
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_GENERATE_ARTICLE_PICKELOBJECT);
    iVar1 = lib::L2CValue::as_integer(aLStack120);
    app::lua_bind::ArticleModule__generate_article_impl(param_2->moduleAccessor,iVar1,false,-1);
    lib::L2CValue::~L2CValue(aLStack120);
  }
  lib::L2CValue::L2CValue(aLStack120,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack152,0x181f41049e);
  uVar5 = lib::L2CValue::as_integer(aLStack120);
  uVar7 = lib::L2CValue::as_integer(aLStack152);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(param_2->moduleAccessor,uVar5,uVar7);
  lib::L2CValue::L2CValue(aLStack136,iVar1);
  lib::L2CValue::~L2CValue(aLStack152);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_FORBID_JUMP_AERIAL_COUNT);
  iVar1 = lib::L2CValue::as_integer(aLStack136);
  iVar2 = lib::L2CValue::as_integer(aLStack120);
  app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,0x20cbc92683);
  lib::L2CValue::L2CValue(aLStack152,1);
  lib::L2CValue::L2CValue(aLStack248,_FIGHTER_LOG_DATA_INT_ATTACK_NUM_KIND);
  lib::L2CValue::L2CValue(aLStack264,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_03 + -1);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,aLStack120);
  lib::L2CAgent::push_lua_stack(param_2,aLStack152);
  lib::L2CAgent::push_lua_stack(param_2,aLStack248);
  lib::L2CAgent::push_lua_stack(param_2,aLStack264);
  app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_2,1);
  lib::L2CValue::~L2CValue(aLStack232);
  lib::L2CValue::~L2CValue(aLStack264);
  lib::L2CValue::~L2CValue(aLStack248);
  lib::L2CValue::~L2CValue(aLStack152);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,true);
  lib::L2CValue::operator=(param_1,aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::~L2CValue(aLStack136);
LAB_71000529c4:
  lib::L2CValue::~L2CValue(aLStack184);
  lib::L2CValue::~L2CValue(aLStack168);
  return;
}

