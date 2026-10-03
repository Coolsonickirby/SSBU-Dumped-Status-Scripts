
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100027780(L2CAgent *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  Fighter *pFVar5;
  long lVar6;
  long lVar7;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CAgent::clear_lua_stack(param_1);
  pvVar4 = (void *)app::sv_system::battle_object(param_1->luaStateAgent);
  if (pvVar4 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack64,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,pvVar4);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_MAGIC_KIND_SWORD);
  pFVar5 = (Fighter *)lib::L2CValue::as_pointer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::FighterSpecializer_Reflet::change_hud_kind(pFVar5,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_INSTANCE_WORK_ID_FLAG_THUNDER_SWORD_ON);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,0x59ae5c70f);
    lib::L2CValue::L2CValue(aLStack80,0xc10da98ed);
    lVar6 = lib::L2CValue::as_integer(aLStack64);
    lVar7 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::VisibilityModule__set_int64_impl(param_1->moduleAccessor,lVar6,lVar7);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_INSTANCE_WORK_ID_FLAG_THUNDER_SWORD_ON);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  return;
}

