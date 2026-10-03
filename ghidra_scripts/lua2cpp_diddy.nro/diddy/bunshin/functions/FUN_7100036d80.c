
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100036d80(L2CWeaponDiddyBunshin *this,L2CValue *return_value)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  L2CValue *this_00;
  Weapon *pWVar4;
  void *pvVar5;
  BattleObjectModuleAccessor *pBVar6;
  ulong uVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,4);
  pWVar4 = (Weapon *)lib::L2CValue::as_pointer(this_00);
  uVar2 = app::lua_bind::Weapon__get_founder_id_impl(pWVar4);
  lib::L2CValue::L2CValue(aLStack80,uVar2);
  uVar2 = lib::L2CValue::as_integer(aLStack80);
  pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar2);
  if (pvVar5 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&FIGHTER_STATUS_KIND_CLIFF_WAIT);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,pvVar5);
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DIDDY_STATUS_FINAL_FLAG_START_FLY_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(pBVar6,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar7 = lib::L2CValue::operator==(aLStack112,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DIDDY_STATUS_FINAL_WORK_INT_FLY_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(pBVar6,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar7 = lib::L2CValue::operator<=(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_DIDDY_BUNSHIN_GENERATE_ARTICLE_BARRELJETS);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar3,0);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack112,0x199c462b5d);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack112);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

