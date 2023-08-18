
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CWeaponEdgeFlare2::status::Pre_exec(long this)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  void *pvVar5;
  BattleObjectModuleAccessor *pBVar6;
  L2CValue *return_value;
  float fVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_INT_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__dec_int_impl(*(BattleObjectModuleAccessor **)(this + 0x40),iVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_FLOAT_RADIUS);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(this + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,fVar7);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_INT_OBJECT_ID);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(this + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::sv_battle_object::is_active(uVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar4 & 1) != 0) {
    uVar3 = lib::L2CValue::as_integer(aLStack96);
    pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar3);
    if (pvVar5 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack64,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,pvVar5);
    }
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack64);
    fVar7 = (float)app::lua_bind::PostureModule__scale_impl(pBVar6);
    lib::L2CValue::L2CValue(aLStack128,fVar7);
    lib::L2CValue::operator_(aLStack80,aLStack128);
    lib::L2CValue::operator_(aLStack80,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack112,aLStack80);
  FUN_71000290f0(aLStack64,this,aLStack112);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

