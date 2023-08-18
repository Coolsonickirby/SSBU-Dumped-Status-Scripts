
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPikminDolfin::status::Fall_init(L2CWeaponPikminDolfin *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  float *pfVar3;
  L2CValue *pLVar4;
  L2CValue *this_00;
  L2CValue *this_01;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  iVar1 = app::sv_information::stage_id();
  lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar1);
  lib::L2CValue::L2CValue(aLStack160,_DAT_71001b9750);
  uVar2 = lib::L2CValue::operator__((L2CValue *)&local_50,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar2 & 1) == 0) {
    iVar1 = app::sv_information::stage_id();
    lib::L2CValue::L2CValue(aLStack96,iVar1);
    lib::L2CValue::L2CValue(aLStack160,_DAT_71001b9754);
    uVar2 = lib::L2CValue::operator__(aLStack96,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      goto LAB_710001cfd8;
    }
    iVar1 = app::sv_information::stage_id();
    lib::L2CValue::L2CValue(aLStack112,iVar1);
    lib::L2CValue::L2CValue(aLStack160,_DAT_71001b9758);
    uVar2 = lib::L2CValue::operator__(aLStack112,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar2 & 1) == 0) goto LAB_710001d124;
  }
  else {
LAB_710001cfd8:
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  }
  pfVar3 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,*pfVar3);
  lib::L2CValue::L2CValue(aLStack144,pfVar3[1]);
  lib::L2CValue::L2CValue(aLStack128,pfVar3[2]);
  FUN_7100008920(aLStack96,this,aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x162d277af);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,15.0);
  lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x162d277af);
  uVar5 = lib::L2CValue::as_number(pLVar4);
  uVar6 = lib::L2CValue::as_number(this_00);
  uVar7 = lib::L2CValue::as_number(this_01);
  local_50 = CONCAT44(uVar6,uVar5);
  uStack72 = (ulong)uVar7;
  app::lua_bind::PostureModule__init_pos_impl(this->moduleAccessor,(Vector3f *)&local_50,true,true);
  lib::L2CValue::_L2CValue(aLStack96);
LAB_710001d124:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

