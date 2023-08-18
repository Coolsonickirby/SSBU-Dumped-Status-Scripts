
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGaogaen::status::FinalDash_check_atk(L2CFighterGaogaen *this,L2CValue *return_value)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  void *pvVar6;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar7;
  L2CValue *in_x1;
  L2CValue *in_x2;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack176,in_x1);
  lib::L2CValue::L2CValue(aLStack192,in_x2);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x10860c2250);
  lib::L2CValue::L2CValue(aLStack80,_BATTLE_OBJECT_CATEGORY_FIGHTER);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x5d6e20d24);
    lib::L2CValue::L2CValue(aLStack80,COLLISION_KIND_HIT);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0xa854977fe);
      uVar1 = lib::L2CValue::as_integer(pLVar4);
      pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar1);
      if (pvVar6 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,pvVar6);
      }
      pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x3a4b90435);
      this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x6c2b55593);
      iVar2 = lib::L2CValue::as_integer(pLVar4);
      iVar3 = lib::L2CValue::as_integer(this_00);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
      iVar2 = app::lua_bind::HitModule__get_status_impl(pBVar7,iVar2,iVar3);
      lib::L2CValue::L2CValue(aLStack112,iVar2);
      pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0xa854977fe);
      uVar1 = lib::L2CValue::as_integer(pLVar4);
      uVar1 = app::sv_battle_object::kind(uVar1);
      lib::L2CValue::L2CValue(aLStack128,uVar1);
      lib::L2CValue::L2CValue(aLStack80,_HIT_STATUS_NORMAL);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_NANA);
        uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
          lib::L2CValue::L2CValue(aLStack144,0.0);
          lib::L2CValue::L2CValue(aLStack160,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
          app::sv_kinetic_energy::set_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack80);
        }
      }
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  return;
}

