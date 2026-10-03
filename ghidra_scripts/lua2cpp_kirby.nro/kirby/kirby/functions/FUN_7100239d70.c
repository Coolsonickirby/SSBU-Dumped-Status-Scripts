
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100239d70(L2CValue *param_1,L2CAgent *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLAG_COPY);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) goto LAB_7100239ed8;
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_COPY_CHARA);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,iVar3);
  lib::L2CValue::operator=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIND_PIT);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIND_PITB);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) goto LAB_7100239e90;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIND_MURABITO);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIND_SHIZUE);
      uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIND_SHULK);
        uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar4 & 1) == 0) goto LAB_7100239ed8;
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_N);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__unable_transition_term_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHULK_INSTANCE_WORK_ID_FLAG_SPECIAL_N_SELECT);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar2 & 1U) == 0) goto LAB_7100239ed8;
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_S);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__unable_transition_term_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_HI);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__unable_transition_term_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_LW);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__unable_transition_term_impl(param_2->moduleAccessor,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0x332821fba4);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,aLStack112);
        app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
        lib::L2CAgent::pop_lua_stack(param_2,1);
        lib::L2CValue::operator!(aLStack96);
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((bVar2 & 1U) == 0) goto LAB_7100239ed8;
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_N);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__unable_transition_term_impl(param_2->moduleAccessor,iVar3);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0x332821fba4);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack112);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      lib::L2CValue::operator!(aLStack96);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar2 & 1U) == 0) goto LAB_7100239ed8;
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_N);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__unable_transition_term_impl(param_2->moduleAccessor,iVar3);
    }
    this = aLStack64;
  }
  else {
LAB_7100239e90:
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLAG_COPY_STRANS_OFF);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    this = aLStack96;
  }
  lib::L2CValue::~L2CValue(this);
LAB_7100239ed8:
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

