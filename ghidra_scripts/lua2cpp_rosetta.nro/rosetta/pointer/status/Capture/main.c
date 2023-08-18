
void __thiscall
L2CWeaponRosettaPointer::status::Capture_main(L2CWeaponRosettaPointer *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  L2CTable *this_00;
  L2CValue *pLVar4;
  Hash40 HVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = (L2CTable *)operator_new(0x48);
  lib::L2CTable::L2CTable(this_00,3);
  lib::L2CValue::L2CValue(aLStack128,this_00);
  lib::L2CValue::L2CValue(aLStack80,0x93198d9d4);
  lib::L2CValue::L2CValue(aLStack96,0x9a891886e);
  lib::L2CValue::L2CValue(aLStack112,0x9df96b8f8);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack128,1);
  lib::L2CValue::operator_(pLVar4,aLStack80);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack128,2);
  lib::L2CValue::operator_(pLVar4,aLStack96);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack128,3);
  lib::L2CValue::operator_(pLVar4,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack160,0x66933a7e6);
  iVar2 = lib::L2CValue::length(aLStack128);
  lib::L2CValue::L2CValue(aLStack176,iVar2);
  HVar5 = lib::L2CValue::as_hash(aLStack160);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  uVar3 = app::sv_math::rand(HVar5,iVar2);
  lib::L2CValue::L2CValue(aLStack144,uVar3);
  lib::L2CValue::L2CValue(aLStack80,1);
  lib::L2CValue::operator_(aLStack144,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::L2CValue(aLStack96,pLVar4);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar5 = lib::L2CValue::as_hash(aLStack96);
  fVar6 = (float)lib::L2CValue::as_number(aLStack80);
  fVar7 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,Capture_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

