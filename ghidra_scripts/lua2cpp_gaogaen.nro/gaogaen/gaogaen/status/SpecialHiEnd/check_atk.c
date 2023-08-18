
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGaogaen::status::SpecialHiBound_check_atk(L2CFighterGaogaen *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue *in_x1;
  L2CValue *in_x2;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,in_x1);
  lib::L2CValue::L2CValue(aLStack112,in_x2);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x10860c2250);
  lib::L2CValue::L2CValue(aLStack64,_BATTLE_OBJECT_CATEGORY_FIGHTER);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar6 & 1) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x5d6e20d24);
    lib::L2CValue::L2CValue(aLStack64,COLLISION_KIND_HIT);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_GAOGAEN_STATUS_SPECIAL_HI_FLAG_DISABLE_OPPONENT_PASSIVE);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) != 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0xa854977fe);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAOGAEN_STATUS_SPECIAL_HI_INT_FALL_HIT_OBJECT_ID)
        ;
        iVar3 = lib::L2CValue::as_integer(pLVar5);
        iVar4 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
        lib::L2CValue::_L2CValue(aLStack64);
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

