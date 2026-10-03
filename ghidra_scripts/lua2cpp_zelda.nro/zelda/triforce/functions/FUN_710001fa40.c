
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001fa40(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  BattleObjectModuleAccessor *pBVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  float fVar9;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(param_2);
  fVar9 = (float)app::lua_bind::PostureModule__scale_impl(pBVar4);
  lib::L2CValue::L2CValue(aLStack112,fVar9);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 0x148),0xf649b0b59);
  lib::L2CValue::operator=(pLVar5,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack160,0x14fefd6a53);
  lib::L2CValue::L2CValue(aLStack176,0);
  uVar6 = lib::L2CValue::as_integer(aLStack160);
  uVar7 = lib::L2CValue::as_integer(aLStack176);
  pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(param_2);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar4,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack144,fVar9);
  lib::L2CValue::L2CValue(aLStack112,100);
  lib::L2CValue::operator/(aLStack144,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 0x148),0xa6feb7c09);
  lib::L2CValue::operator=(pLVar5,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(param_2);
  fVar9 = (float)app::lua_bind::ModelModule__scale_z_impl(pBVar4);
  lib::L2CValue::L2CValue(aLStack112,fVar9);
  pLVar5 = (L2CValue *)(param_1 + 0x158);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x7d8c1ae08);
  lib::L2CValue::operator=(pLVar8,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  fVar9 = (float)lib::L2CValue::as_number(param_3);
  pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(param_2);
  app::lua_bind::ModelModule__set_temporary_scale_z_impl(pBVar4,fVar9);
  iVar3 = lib::L2CValue::as_integer(param_4);
  pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(param_2);
  app::lua_bind::ModelModule__set_depth_stencil_impl(pBVar4,iVar3);
  lib::L2CValue::operator!(param_5);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar1 & 1U) != 0) {
    pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(param_2);
    bVar2 = app::lua_bind::EffectModule__is_sync_visibility_impl(pBVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x1637852507);
    lib::L2CValue::operator=(pLVar8,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  bVar2 = lib::L2CValue::as_bool(param_5);
  pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(param_2);
  app::lua_bind::EffectModule__set_whole_impl(pBVar4,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_5);
  if ((bVar1 & 1U) == 0) {
    bVar2 = 0;
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x1637852507);
    bVar2 = lib::L2CValue::operator.cast.to.bool(pLVar5);
  }
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  bVar2 = lib::L2CValue::as_bool(aLStack112);
  pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(param_2);
  app::lua_bind::EffectModule__set_sync_visibility_impl(pBVar4,(bool)(bVar2 & 1));
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INSTANCE_WORK_ID_FLAG_KO_SURVIVE);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(param_2);
  app::lua_bind::WorkModule__on_flag_impl(pBVar4,iVar3);
  lib::L2CValue::~L2CValue(aLStack112);
  app::LinkEventMask::new_l2c_table();
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x827d5ea74);
  lib::L2CValue::operator=(pLVar5,param_3);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0xe4ab68f1c);
  lib::L2CValue::operator=(pLVar5,param_4);
  lib::L2CValue::L2CValue(aLStack144,_LINK_NO_ARTICLE);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(param_2);
  bVar2 = app::lua_bind::LinkModule__is_linked_impl(pBVar4,iVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_LINK_NO_ARTICLE);
    lib::L2CValue::L2CValue(aLStack144,0);
    FUN_710001ff70(aLStack192,aLStack128,aLStack112,aLStack144,param_2);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack144,_ITEM_LINK_NO_HAVE);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(param_2);
  bVar2 = app::lua_bind::LinkModule__is_linked_impl(pBVar4,iVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_ITEM_LINK_NO_HAVE);
    lib::L2CValue::L2CValue(aLStack144,0);
    FUN_710001ff70(aLStack208,aLStack128,aLStack112,aLStack144,param_2);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

