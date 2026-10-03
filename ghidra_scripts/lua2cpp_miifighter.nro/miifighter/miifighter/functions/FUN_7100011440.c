
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100011440(L2CFighterMiifighter *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  Hash40 HVar8;
  void *pvVar9;
  BattleObjectModuleAccessor *pBVar10;
  int iVar11;
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [24];
  
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack136,pLVar6);
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_MIIFIGHTER_STATUS_KIND_FINAL_HIT);
  uVar7 = lib::L2CValue::operator==(aLStack136,aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_MIIFIGHTER_STATUS_KIND_FINAL_MOVE);
    uVar7 = lib::L2CValue::operator==(aLStack136,aLStack120);
    lib::L2CValue::~L2CValue(aLStack120);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack120,_FIGHTER_MIIFIGHTER_STATUS_KIND_FINAL_END);
      uVar7 = lib::L2CValue::operator==(aLStack136,aLStack120);
      lib::L2CValue::~L2CValue(aLStack120);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack120,_FIGHTER_MIIFIGHTER_STATUS_KIND_FINAL_ATTACK);
        uVar7 = lib::L2CValue::operator==(aLStack136,aLStack120);
        lib::L2CValue::~L2CValue(aLStack120);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::~L2CValue(aLStack136);
          lib::L2CValue::L2CValue(aLStack136,_FIGHTER_LINK_NO_FINAL);
          iVar3 = lib::L2CValue::as_integer(aLStack136);
          bVar1 = app::lua_bind::LinkModule__is_linked_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack120,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack120);
          lib::L2CValue::~L2CValue(aLStack120);
          lib::L2CValue::~L2CValue(aLStack136);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack120,_FIGHTER_LINK_NO_FINAL);
            lib::L2CValue::L2CValue(aLStack136,0xca6184e65);
            iVar3 = lib::L2CValue::as_integer(aLStack120);
            HVar8 = lib::L2CValue::as_hash(aLStack136);
            app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar3,HVar8,0);
            lib::L2CValue::~L2CValue(aLStack136);
            lib::L2CValue::~L2CValue(aLStack120);
          }
          lib::L2CValue::L2CValue
                    (aLStack120,_FIGHTER_MIIFIGHTER_INSTANCE_WORK_ID_INT_FINAL_HIT_NUM_LAST);
          iVar3 = lib::L2CValue::as_integer(aLStack120);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack136,iVar3);
          lib::L2CValue::~L2CValue(aLStack120);
          lib::L2CValue::L2CValue(aLStack120,1);
          lib::L2CValue::operator-(aLStack136,aLStack120);
          lib::L2CValue::~L2CValue(aLStack120);
          iVar3 = lib::L2CValue::as_integer(aLStack152);
          lib::L2CValue::~L2CValue(aLStack152);
          if (-1 < iVar3) {
            iVar11 = -1;
            do {
              lib::L2CValue::L2CValue
                        (aLStack120,iVar11 + _FIGHTER_MIIFIGHTER_STATUS_FINAL_WORK_INT_TASK_ID1 + 1)
              ;
              iVar4 = lib::L2CValue::as_integer(aLStack120);
              iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
              lib::L2CValue::L2CValue(aLStack152,iVar4);
              lib::L2CValue::~L2CValue(aLStack120);
              uVar5 = lib::L2CValue::as_integer(aLStack152);
              bVar1 = app::sv_battle_object::is_active(uVar5);
              lib::L2CValue::L2CValue(aLStack120,(bool)(bVar1 & 1));
              bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack120);
              lib::L2CValue::~L2CValue(aLStack120);
              if ((bVar2 & 1U) != 0) {
                uVar5 = lib::L2CValue::as_integer(aLStack152);
                pvVar9 = (void *)app::sv_battle_object::module_accessor(uVar5);
                if (pvVar9 == (void *)0x0) {
                  lib::L2CValue::L2CValue(aLStack184,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
                }
                else {
                  lib::L2CValue::L2CValue(aLStack184,pvVar9);
                }
                pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack184);
                iVar4 = app::lua_bind::StatusModule__status_kind_impl(pBVar10);
                lib::L2CValue::L2CValue(aLStack168,iVar4);
                lib::L2CValue::L2CValue(aLStack120,_FIGHTER_STATUS_KIND_MIIFIGHTER_FINAL_DAMAGE_FLY)
                ;
                uVar7 = lib::L2CValue::operator==(aLStack168,aLStack120);
                lib::L2CValue::~L2CValue(aLStack120);
                if ((uVar7 & 1) == 0) {
                  uVar5 = lib::L2CValue::as_integer(aLStack152);
                  pvVar9 = (void *)app::sv_battle_object::module_accessor(uVar5);
                  if (pvVar9 == (void *)0x0) {
                    lib::L2CValue::L2CValue(aLStack216,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
                  }
                  else {
                    lib::L2CValue::L2CValue(aLStack216,pvVar9);
                  }
                  pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack216);
                  iVar4 = app::lua_bind::StatusModule__status_kind_impl(pBVar10);
                  lib::L2CValue::L2CValue(aLStack200,iVar4);
                  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_STATUS_KIND_MIIFIGHTER_FINAL_DAMAGE);
                  uVar7 = lib::L2CValue::operator==(aLStack200,aLStack120);
                  lib::L2CValue::~L2CValue(aLStack120);
                  if ((uVar7 & 1) != 0) {
                    lib::L2CValue::~L2CValue(aLStack200);
                    lib::L2CValue::~L2CValue(aLStack216);
                    goto LAB_71000118a4;
                  }
                  uVar5 = lib::L2CValue::as_integer(aLStack152);
                  pvVar9 = (void *)app::sv_battle_object::module_accessor(uVar5);
                  if (pvVar9 == (void *)0x0) {
                    lib::L2CValue::L2CValue(aLStack248,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
                  }
                  else {
                    lib::L2CValue::L2CValue(aLStack248,pvVar9);
                  }
                  pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack248);
                  iVar4 = app::lua_bind::StatusModule__status_kind_impl(pBVar10);
                  lib::L2CValue::L2CValue(aLStack232,iVar4);
                  lib::L2CValue::L2CValue
                            (aLStack120,_FIGHTER_STATUS_KIND_MIIFIGHTER_FINAL_DAMAGE_FALL);
                  uVar7 = lib::L2CValue::operator==(aLStack232,aLStack120);
                  lib::L2CValue::~L2CValue(aLStack120);
                  lib::L2CValue::~L2CValue(aLStack232);
                  lib::L2CValue::~L2CValue(aLStack248);
                  lib::L2CValue::~L2CValue(aLStack200);
                  lib::L2CValue::~L2CValue(aLStack216);
                  lib::L2CValue::~L2CValue(aLStack168);
                  lib::L2CValue::~L2CValue(aLStack184);
                  if ((uVar7 & 1) == 0) goto LAB_71000119c4;
                }
                else {
LAB_71000118a4:
                  lib::L2CValue::~L2CValue(aLStack168);
                  lib::L2CValue::~L2CValue(aLStack184);
                }
                lib::L2CValue::L2CValue(aLStack120,_FIGHTER_MIIFIGHTER_LINK_NO_FINAL);
                iVar4 = lib::L2CValue::as_integer(aLStack120);
                uVar5 = lib::L2CValue::as_integer(aLStack152);
                bVar1 = app::lua_bind::LinkModule__link_impl(this->moduleAccessor,iVar4,uVar5);
                lib::L2CValue::L2CValue(aLStack264,(bool)(bVar1 & 1));
                lib::L2CValue::~L2CValue(aLStack264);
                lib::L2CValue::~L2CValue(aLStack120);
                lib::L2CValue::L2CValue(aLStack120,_FIGHTER_MIIFIGHTER_LINK_NO_FINAL);
                lib::L2CValue::L2CValue(aLStack168,0xca6184e65);
                iVar4 = lib::L2CValue::as_integer(aLStack120);
                HVar8 = lib::L2CValue::as_hash(aLStack168);
                app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar4,HVar8,0)
                ;
                lib::L2CValue::~L2CValue(aLStack168);
                lib::L2CValue::~L2CValue(aLStack120);
                lib::L2CValue::L2CValue(aLStack120,_FIGHTER_MIIFIGHTER_LINK_NO_FINAL);
                lib::L2CValue::L2CValue(aLStack168,0xca6184e65);
                iVar4 = lib::L2CValue::as_integer(aLStack120);
                HVar8 = lib::L2CValue::as_hash(aLStack168);
                app::lua_bind::LinkModule__send_event_parents_impl(this->moduleAccessor,iVar4,HVar8)
                ;
                lib::L2CValue::~L2CValue(aLStack168);
                lib::L2CValue::~L2CValue(aLStack120);
                lib::L2CValue::L2CValue(aLStack120,_FIGHTER_MIIFIGHTER_LINK_NO_FINAL);
                iVar4 = lib::L2CValue::as_integer(aLStack120);
                app::lua_bind::LinkModule__unlink_impl(this->moduleAccessor,iVar4);
                lib::L2CValue::~L2CValue(aLStack120);
              }
LAB_71000119c4:
              lib::L2CValue::~L2CValue(aLStack152);
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar3);
          }
          lib::L2CValue::L2CValue(aLStack120,0.0);
          lib::L2CValue::L2CValue(aLStack152,0.0);
          FUN_7100011b90(aLStack120,aLStack152);
          lib::L2CValue::~L2CValue(aLStack152);
          lib::L2CValue::~L2CValue(aLStack120);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          goto LAB_7100011544;
        }
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100011544:
  lib::L2CValue::~L2CValue(aLStack136);
  return;
}

