
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGaogaen::status::SpecialHiLoop_end(L2CFighterGaogaen *this,L2CValue *return_value)

{
  int iVar1;
  float *pfVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  L2CValue *this_00;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack160,0.0);
  fVar5 = (float)lib::L2CValue::as_number(aLStack160);
  app::lua_bind::GroundModule__set_offset_x_impl(this->moduleAccessor,fVar5);
  lib::L2CValue::_L2CValue(aLStack160);
  app::lua_bind::GroundModule__update_force_impl(this->moduleAccessor);
  pfVar2 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,*pfVar2);
  lib::L2CValue::L2CValue(aLStack144,pfVar2[1]);
  lib::L2CValue::L2CValue(aLStack128,pfVar2[2]);
  FUN_710001a800(aLStack112,this,aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  pfVar2 = (float *)app::lua_bind::GroundModule__correct_pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack208,*pfVar2);
  lib::L2CValue::L2CValue(aLStack192,pfVar2[1]);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,aLStack208);
  lib::L2CValue::L2CValue(aLStack96,aLStack192);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
  lib::L2CValue::operator_(pLVar4,pLVar3);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar4,pLVar3);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x162d277af);
  uVar6 = lib::L2CValue::as_number(pLVar3);
  uVar7 = lib::L2CValue::as_number(pLVar4);
  uVar8 = lib::L2CValue::as_number(this_00);
  local_50 = CONCAT44(uVar7,uVar6);
  uStack72 = (ulong)uVar8;
  app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_FALL);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  FUN_7100016750(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

