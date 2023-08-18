
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterEdge::status::JumpAerial_pre(L2CFighterEdge *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *this_00;
  Fighter *pFVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_71000028d0(aLStack80,this);
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
    lib::L2CValue::L2CValue(aLStack64,true);
    pFVar4 = (Fighter *)lib::L2CValue::as_pointer(this_00);
    bVar1 = lib::L2CValue::as_bool(aLStack64);
    app::FighterSpecializer_Edge::set_one_winged_light_weight_data(pFVar4,(bool)(bVar1 & 1));
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack64,_FIGHTER_EDGE_INSTANCE_WORK_ID_FLAG_ONE_WINGED_CANNOT_JUMP_PLUS);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_EDGE_INSTANCE_WORK_ID_FLAG_ONE_WINGED_JUMP_PLUS_ON);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  }
  lib::L2CValue::_L2CValue(aLStack64);
  lua2cpp::L2CFighterCommon::status_pre_JumpAerial(this);
  return;
}

