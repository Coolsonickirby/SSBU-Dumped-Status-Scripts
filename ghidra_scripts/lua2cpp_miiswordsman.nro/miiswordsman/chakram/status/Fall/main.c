
void __thiscall
L2CWeaponMiiswordsmanChakram::status::Fall_main
          (L2CWeaponMiiswordsmanChakram *this,L2CValue *return_value)

{
  byte bVar1;
  Hash40 HVar2;
  float *pfVar3;
  L2CValue *pLVar4;
  L2CValue *this_00;
  L2CValue *this_01;
  float fVar5;
  float fVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack192,0x4fb50df0c);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar2 = lib::L2CValue::as_hash(aLStack192);
  fVar5 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
  fVar6 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar2,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack192);
  pfVar3 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,*pfVar3);
  lib::L2CValue::L2CValue(aLStack176,pfVar3[1]);
  lib::L2CValue::L2CValue(aLStack160,pfVar3[2]);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack192);
  lib::L2CValue::L2CValue(aLStack112,aLStack176);
  lib::L2CValue::L2CValue(aLStack128,aLStack160);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,2.3);
  lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar4,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x162d277af);
  uVar8 = lib::L2CValue::as_number(pLVar4);
  lVar9 = lib::L2CValue::as_number(this_00);
  uVar7 = lib::L2CValue::as_number(this_01);
  local_60 = uVar8 & 0xffffffff | lVar9 << 0x20;
  uStack88 = (ulong)uVar7;
  app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,Fall_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

