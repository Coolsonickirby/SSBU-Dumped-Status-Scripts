
void __thiscall
L2CFighterBayonetta::status::Attack100_check_atk(L2CFighterBayonetta *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  L2CValue *this_00;
  AttackData *pAVar4;
  ulong uVar5;
  L2CValue *in_x1;
  L2CValue *in_x2;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack128,in_x1);
  lib::L2CValue::L2CValue(aLStack144,in_x2);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x81b51c4e0);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x9ab78885f);
  iVar2 = lib::L2CValue::as_integer(pLVar3);
  bVar1 = lib::L2CValue::as_bool(this_00);
  pAVar4 = (AttackData *)
           app::lua_bind::AttackModule__attack_data_impl
                     (this->moduleAccessor,iVar2,(bool)(bVar1 & 1));
  app::lua_bind::AttackData__store_l2c_table_impl(pAVar4);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack80,0x5330809b6);
  lib::L2CValue::L2CValue(aLStack64,0x1cd9e295e5);
  uVar5 = lib::L2CValue::operator__(pLVar3,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,aLStack128);
    lib::L2CValue::L2CValue(aLStack112,aLStack144);
    lua2cpp::L2CFighterCommon::FighterStatusUniqProcessAttack_check_attack
              (this,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

