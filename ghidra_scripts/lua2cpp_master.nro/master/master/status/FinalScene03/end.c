
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::FinalScene03_end(L2CFighterMaster *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *this_00;
  Fighter *pFVar2;
  float fVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MASTER_FINAL_MODULE_SCENE_03_EXIT);
  pFVar2 = (Fighter *)lib::L2CValue::as_pointer(this_00);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::FighterSpecializer_Master::call_final_module(pFVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_FINAL_FLOAT_SCALE_BASE);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack64,fVar3);
  fVar3 = (float)lib::L2CValue::as_number(aLStack64);
  app::lua_bind::PostureModule__set_scale_impl(this->moduleAccessor,fVar3,false);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

