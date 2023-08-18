
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::FinalEnd_exec(L2CFighterBayonetta *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  BattleObjectModuleAccessor *pBVar4;
  Hash40 HVar5;
  uint uVar6;
  long lVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  iVar1 = app::lua_bind::StatusModule__status_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,FIGHTER_STATUS_KIND_FINAL);
  uVar2 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_BAYONETTA_STATUS_KIND_FINAL_START);
    uVar2 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_BAYONETTA_STATUS_KIND_FINAL_SCENE01);
      uVar2 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_BAYONETTA_STATUS_KIND_FINAL_END);
        uVar2 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        if ((uVar2 & 1) != 0) {
          pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
          pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
          app::lua_bind::FighterBayonettaFinalModule__final_end_exec_impl
                    (BATTLE_OBJECT_CATEGORY_ITEM,pBVar4);
        }
      }
      else {
        pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
        pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
        app::lua_bind::FighterBayonettaFinalModule__final_scene01_exec_impl
                  (BATTLE_OBJECT_CATEGORY_ITEM,pBVar4);
        lib::L2CValue::L2CValue(aLStack112,0x79c3de8e1);
        lib::L2CValue::L2CValue(aLStack128,0.0001);
        lib::L2CValue::L2CValue(aLStack144,0.0001);
        lib::L2CValue::L2CValue(aLStack160,0.0001);
        HVar5 = lib::L2CValue::as_hash(aLStack112);
        uVar2 = lib::L2CValue::as_number(aLStack128);
        lVar7 = lib::L2CValue::as_number(aLStack144);
        uVar6 = lib::L2CValue::as_number(aLStack160);
        local_50 = uVar2 & 0xffffffff | lVar7 << 0x20;
        uStack72 = (ulong)uVar6;
        app::lua_bind::ModelModule__set_joint_scale_impl
                  (this->moduleAccessor,HVar5,(Vector3f *)&local_50);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0x70534b95b);
        lib::L2CValue::L2CValue(aLStack128,0.0001);
        lib::L2CValue::L2CValue(aLStack144,0.0001);
        lib::L2CValue::L2CValue(aLStack160,0.0001);
        HVar5 = lib::L2CValue::as_hash(aLStack112);
        uVar2 = lib::L2CValue::as_number(aLStack128);
        lVar7 = lib::L2CValue::as_number(aLStack144);
        uVar6 = lib::L2CValue::as_number(aLStack160);
        local_50 = uVar2 & 0xffffffff | lVar7 << 0x20;
        uStack72 = (ulong)uVar6;
        app::lua_bind::ModelModule__set_joint_scale_impl
                  (this->moduleAccessor,HVar5,(Vector3f *)&local_50);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0x7723389cd);
        lib::L2CValue::L2CValue(aLStack128,0.0001);
        lib::L2CValue::L2CValue(aLStack144,0.0001);
        lib::L2CValue::L2CValue(aLStack160,0.0001);
        HVar5 = lib::L2CValue::as_hash(aLStack112);
        uVar2 = lib::L2CValue::as_number(aLStack128);
        lVar7 = lib::L2CValue::as_number(aLStack144);
        uVar6 = lib::L2CValue::as_number(aLStack160);
        local_50 = uVar2 & 0xffffffff | lVar7 << 0x20;
        uStack72 = (ulong)uVar6;
        app::lua_bind::ModelModule__set_joint_scale_impl
                  (this->moduleAccessor,HVar5,(Vector3f *)&local_50);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
      }
    }
    else {
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
      app::lua_bind::FighterBayonettaFinalModule__final_start_exec_impl
                (BATTLE_OBJECT_CATEGORY_ITEM,pBVar4);
    }
  }
  else {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
    app::lua_bind::FighterBayonettaFinalModule__final_exec_impl(BATTLE_OBJECT_CATEGORY_ITEM,pBVar4);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

