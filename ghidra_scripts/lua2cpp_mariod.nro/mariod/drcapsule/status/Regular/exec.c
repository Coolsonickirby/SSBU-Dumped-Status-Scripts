
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMariodDrcapsule::status::Regular_exec
          (L2CWeaponMariodDrcapsule *this,L2CValue *return_value)

{
  int iVar1;
  float *pfVar2;
  L2CValue *pLVar3;
  L2CValue *this_00;
  L2CValue *this_01;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  pfVar2 = (float *)app::lua_bind::PostureModule__rot_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue(aLStack176,*pfVar2);
  lib::L2CValue::L2CValue(aLStack160,pfVar2[1]);
  lib::L2CValue::L2CValue(aLStack144,pfVar2[2]);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,aLStack176);
  lib::L2CValue::L2CValue(aLStack96,aLStack160);
  lib::L2CValue::L2CValue(aLStack112,aLStack144);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,22.09216);
  lib::L2CValue::operator+(pLVar3,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
  lib::L2CValue::operator=(pLVar3,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x162d277af);
  uVar4 = lib::L2CValue::as_number(pLVar3);
  uVar5 = lib::L2CValue::as_number(this_00);
  uVar6 = lib::L2CValue::as_number(this_01);
  local_50 = CONCAT44(uVar5,uVar4);
  uStack72 = (ulong)uVar6;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

