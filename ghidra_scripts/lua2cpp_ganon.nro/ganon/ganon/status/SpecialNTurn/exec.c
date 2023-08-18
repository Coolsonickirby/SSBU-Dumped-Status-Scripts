
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGanon::status::SpecialNTurn_exec(L2CFighterGanon *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  L2CValue *pLVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  this_00 = &this->globalTable;
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
  uVar4 = lib::L2CValue::operator__(pLVar2,pLVar3);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_GANON_STATUS_WORK_ID_FLOAT_GANON_PUNCH_START_CHARA_DIR);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::operator_(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    app::sv_kinetic_energy::set_chara_dir(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
  uVar4 = lib::L2CValue::operator__(pLVar2,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) != 0) {
    FUN_7100007a30(this);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

