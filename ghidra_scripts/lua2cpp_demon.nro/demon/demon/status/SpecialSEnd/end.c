
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::SpecialSEnd_end(L2CFighterDemon *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *this_00;
  FighterModuleAccessor *pFVar2;
  uint uVar3;
  ulong uVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  ulong local_40;
  undefined8 uStack56;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_INSTANCE_WORK_ID_FLAG_DAMAGE_CLIFF_STOP);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  pFVar2 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(this_00);
  uVar4 = lib::L2CValue::as_number(aLStack80);
  uVar3 = lib::L2CValue::as_number(aLStack96);
  local_40 = uVar4 & 0xffffffff | (ulong)uVar3 << 0x20;
  uStack56 = 0;
  app::FighterSpecializer_Demon::set_jostle_area_offset(pFVar2,(Vector2f *)&local_40);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

