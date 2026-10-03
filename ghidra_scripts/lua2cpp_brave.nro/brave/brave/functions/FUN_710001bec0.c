
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001bec0(L2CAgent *param_1)

{
  char cVar1;
  int iVar2;
  FighterBraveSpecialLwVariousKind FVar3;
  FighterBraveSpecialLwCommand FVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Fighter *pFVar8;
  BattleObjectModuleAccessor *pBVar9;
  ulong uVar10;
  float fVar11;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_INSTANCE_WORK_ID_INT_SPECIAL_LW_DECIDE_COMMAND);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_SPECIAL_LW_COMMAND15_VARIOUS);
  uVar6 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_INSTANCE_WORK_ID_INT_SPECIAL_LW_VARIOUS_KIND);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack112,iVar2);
    lib::L2CValue::~L2CValue(aLStack80);
    FVar3 = lib::L2CValue::as_integer(aLStack112);
    cVar1 = app::FighterSpecializer_Brave::get_special_lw_various_kind2command(FVar3);
    lib::L2CValue::L2CValue(aLStack128,(int)cVar1);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_SPECIAL_LW_COMMAND_NONE);
    uVar6 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::operator=(aLStack96,aLStack128);
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_SPECIAL_LW_COMMAND_NONE);
    uVar6 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      app::lua_bind::ControlModule__clear_command_impl(param_1->moduleAccessor,false);
      app::lua_bind::ControlModule__reset_trigger_impl(param_1->moduleAccessor);
    }
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_SPECIAL_LW_COMMAND01_CURE);
  uVar6 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_SPECIAL_LW_COMMAND11_SPEED_UP);
    uVar6 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) goto LAB_710001c154;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_SPECIAL_LW_COMMAND12_ATTACK_UP);
    uVar6 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) goto LAB_710001c154;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_SPECIAL_LW_COMMAND13_REFLECT);
    uVar6 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) goto LAB_710001c154;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_SPECIAL_LW_COMMAND15_VARIOUS);
    uVar6 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) goto LAB_710001c154;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_SPECIAL_LW_COMMAND16_FLYING);
    uVar6 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) goto LAB_710001c154;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_SPECIAL_LW_COMMAND21_CHARGE);
    uVar6 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) goto LAB_710001c154;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_SPECIAL_LW_COMMAND17_FIRESWORD);
    uVar6 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_SPECIAL_LW_COMMAND18_ICESWORD);
      uVar6 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_SPECIAL_LW_COMMAND19_IRONSWORD);
        uVar6 = lib::L2CValue::operator==(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_SPECIAL_LW_COMMAND20_DEVILSWORD);
          uVar6 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar6 & 1) == 0) goto LAB_710001c20c;
        }
      }
    }
    iVar2 = _FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_09;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_SPECIAL_LW_COMMAND17_FIRESWORD);
    lib::L2CValue::operator-(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    lib::L2CValue::operator+(aLStack80,aLStack160);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,1);
    lib::L2CValue::operator-(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack80,0x20cbc92683);
    lib::L2CValue::L2CValue(aLStack128,1);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_LOG_DATA_INT_ATTACK_NUM_KIND);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack80);
    lib::L2CAgent::push_lua_stack(param_1,aLStack128);
    lib::L2CAgent::push_lua_stack(param_1,aLStack160);
    lib::L2CAgent::push_lua_stack(param_1,aLStack112);
    app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_1,1);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x3a40337e2c);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack80);
    lib::L2CAgent::push_lua_stack(param_1,aLStack112);
    app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_1,1);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar7 = aLStack112;
  }
  else {
LAB_710001c154:
    lib::L2CValue::L2CValue(aLStack80,0x20cbc92683);
    lib::L2CValue::L2CValue(aLStack112,1);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LOG_DATA_INT_ATTACK_NUM_KIND);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_16 + -1);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack80);
    lib::L2CAgent::push_lua_stack(param_1,aLStack112);
    lib::L2CAgent::push_lua_stack(param_1,aLStack128);
    lib::L2CAgent::push_lua_stack(param_1,aLStack160);
    app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_1,1);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    pLVar7 = aLStack80;
  }
  lib::L2CValue::~L2CValue(pLVar7);
LAB_710001c20c:
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_BRAVE_INSTANCE_WORK_ID_FLOAT_SP);
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,fVar11);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator+(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_START_WORK_FLOAT_SP);
  fVar11 = (float)lib::L2CValue::as_number(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(param_1->moduleAccessor,fVar11,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_SPECIAL_LW_COMMAND08_FULLBURST);
  uVar6 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_BRAVE_INSTANCE_WORK_ID_INT_SPECIAL_LW_DECIDE_COMMAND);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    lib::L2CValue::operator=(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,5);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
    FVar4 = lib::L2CValue::as_integer(aLStack96);
    fVar11 = (float)app::FighterSpecializer_Brave::get_special_lw_command_sp_cost(pBVar9,FVar4,true)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar11);
    lib::L2CValue::L2CValue(aLStack208,aLStack80);
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_SUCCESS_SP);
    FUN_7100016db0(param_1,aLStack208,aLStack224);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,4);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    pFVar8 = (Fighter *)lib::L2CValue::as_pointer(pLVar7);
    fVar11 = (float)lib::L2CValue::as_number(aLStack80);
    app::FighterSpecializer_Brave::set_sp(pFVar8,fVar11,false);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_SUCCESS_SP);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar2);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,4);
  pFVar8 = (Fighter *)lib::L2CValue::as_pointer(pLVar7);
  app::FighterSpecializer_Brave::special_lw_on_start_command(pFVar8);
  lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack128,0x227b03abbe);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  uVar10 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(param_1->moduleAccessor,uVar6,uVar10);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::L2CValue
            (aLStack160,_FIGHTER_BRAVE_INSTANCE_WORK_ID_INT_SPECIAL_LW_WINDOW_CLOSING_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar5 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_int_impl(param_1->moduleAccessor,iVar2,iVar5);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack128,0x267fae487d);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  uVar10 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(param_1->moduleAccessor,uVar6,uVar10);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::L2CValue
            (aLStack160,_FIGHTER_BRAVE_INSTANCE_WORK_ID_INT_SPECIAL_LW_WINDOW_OVERWRITE_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar5 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_int_impl(param_1->moduleAccessor,iVar2,iVar5);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_COMMAND_WINDOW_STATE_DECIDED_TO_CLOSING);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_INSTANCE_WORK_ID_INT_SPECIAL_LW_WINDOW_STATE);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar5 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(param_1->moduleAccessor,iVar2,iVar5);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_INSTANCE_WORK_ID_FLAG_DISABLE_SP_AUTO_RECOVER);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

