
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001d1b50(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *this;
  float fVar6;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this = aLStack192;
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROBOT_INSTANCE_WORK_ID_FLOAT_BEAM_ENERGY_VALUE);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,fVar6);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator+(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_STATUS_BEAM_WORK_FLOAT_ENERGY_VALUE);
    fVar6 = (float)lib::L2CValue::as_number(aLStack96);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl(param_2->moduleAccessor,fVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_STATUS_BEAM_FLAG_SHOOT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_INSTANCE_WORK_ID_FLOAT_BEAM_ENERGY_VALUE);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,fVar6);
      lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack144,0x1122faa900);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_2->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack112,fVar6);
      uVar4 = lib::L2CValue::operator<(aLStack112,aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0x2d20f5d2a5);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,aLStack80);
        app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
        lib::L2CAgent::pop_lua_stack(param_2,1);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_GENERATE_ARTICLE_BEAM);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::ArticleModule__generate_article_impl(param_2->moduleAccessor,iVar3,false,-1);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x2e819a87c4);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,aLStack80);
        app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
        lib::L2CAgent::pop_lua_stack(param_2,1);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x20cbc92683);
        lib::L2CValue::L2CValue(aLStack96,1);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LOG_DATA_INT_SHOOT_NUM);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,aLStack80);
        lib::L2CAgent::push_lua_stack(param_2,aLStack96);
        lib::L2CAgent::push_lua_stack(param_2,aLStack112);
        app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
        lib::L2CAgent::pop_lua_stack(param_2,1);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack112);
        this = aLStack96;
      }
      lib::L2CValue::~L2CValue(this);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_STATUS_BEAM_FLAG_SHOOT);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_INSTANCE_WORK_ID_FLOAT_BEAM_ENERGY_VALUE);
      fVar6 = (float)lib::L2CValue::as_number(aLStack80);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(param_2->moduleAccessor,fVar6,iVar3);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

