
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001d0060(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue *this;
  BattleObjectModuleAccessor *pBVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PZENIGAME_INSTANCE_WORK_ID_INT_SPECIAL_N_CHARGE);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack64,iVar2);
    lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack128,0xca3dc30e5);
    uVar3 = lib::L2CValue::as_integer(aLStack112);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(param_2->moduleAccessor,uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    uVar3 = lib::L2CValue::operator<(aLStack64,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PZENIGAME_INSTANCE_WORK_ID_INT_SPECIAL_N_CHARGE);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__inc_int_impl(param_2->moduleAccessor,iVar2);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PZENIGAME_INSTANCE_WORK_ID_INT_SPECIAL_N_CHARGE);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      iVar2 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack64,iVar2);
      lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack128,0xca3dc30e5);
      uVar3 = lib::L2CValue::as_integer(aLStack112);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      iVar2 = app::lua_bind::WorkModule__get_param_int_impl(param_2->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack96,iVar2);
      uVar3 = lib::L2CValue::operator<=(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ANIMCMD_EFFECT);
        lib::L2CValue::L2CValue(aLStack80,0x2134a05c84);
        iVar2 = lib::L2CValue::as_integer(aLStack64);
        HVar5 = lib::L2CValue::as_hash(aLStack80);
        app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                  (param_2->moduleAccessor,iVar2,HVar5,-1);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ANIMCMD_SOUND);
        lib::L2CValue::L2CValue(aLStack80,0x201610af41);
        iVar2 = lib::L2CValue::as_integer(aLStack64);
        HVar5 = lib::L2CValue::as_hash(aLStack80);
        app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                  (param_2->moduleAccessor,iVar2,HVar5,-1);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,_MA_MSC_CMD_EFFECT_EFFECT_COMMON);
        lib::L2CValue::L2CValue(aLStack80,0xaec2db62e);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,aLStack64);
        lib::L2CAgent::push_lua_stack(param_2,aLStack80);
        app::sv_module_access::effect(param_2->luaStateAgent);
        lib::L2CAgent::pop_lua_stack(param_2,1);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack64);
        this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,5);
        pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this);
        app::FighterUtil::flash_eye_info(pBVar6);
      }
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

