
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000faf0(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  Hash40 HVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  code *pcVar7;
  long *plVar8;
  L2CValue *this;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = aLStack112;
  lib::L2CValue::L2CValue(aLStack64,0xb482d246d);
  lib::L2CValue::L2CValue(aLStack80,false);
  HVar4 = lib::L2CValue::as_hash(aLStack64);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::EffectModule__kill_kind_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar4,(bool)(bVar1 & 1),true);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
  lib::L2CValue::L2CValue(aLStack80,pLVar5);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_IKE_STATUS_KIND_FINAL_HIT);
  uVar6 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_IKE_STATUS_KIND_FINAL_MOVE);
    uVar6 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_IKE_STATUS_KIND_FINAL_FALL);
      uVar6 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_IKE_STATUS_KIND_FINAL_END);
        uVar6 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_IKE_STATUS_KIND_FINAL_ATTACK);
          uVar6 = lib::L2CValue::operator==(aLStack80,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_IKE_GENERATE_ARTICLE_SWORD);
            iVar3 = lib::L2CValue::as_integer(aLStack64);
            app::lua_bind::ArticleModule__remove_exist_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,0);
            lib::L2CValue::~L2CValue(aLStack64);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_NO_FINAL);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            bVar1 = app::lua_bind::LinkModule__is_linked_impl
                              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
            lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            lib::L2CValue::~L2CValue(aLStack80);
            if ((bVar2 & 1U) == 0) {
              return;
            }
            app::LinkEvent::new_l2c_table();
            pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x105a79305b);
            lib::L2CValue::L2CValue(aLStack64,0xca6184e65);
            lib::L2CValue::operator=(pLVar5,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LINK_NO_FINAL);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x11f63699bf);
            pcVar7 = (code *)lib::L2CValue::as_pointer(pLVar5);
            plVar8 = (long *)(*pcVar7)();
            app::lua_bind::LinkEvent__load_from_l2c_table_impl((LinkEvent *)plVar8,aLStack80);
            app::lua_bind::LinkModule__send_event_nodes_struct_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,(LinkEvent *)plVar8,0)
            ;
            app::lua_bind::LinkEvent__store_l2c_table_impl((LinkEvent *)plVar8);
            lib::L2CValue::L2CValue(aLStack96,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            (**(code **)(*plVar8 + 8))(plVar8);
            lib::L2CValue::~L2CValue(aLStack96);
          }
          else {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_IKE_GENERATE_ARTICLE_SWORD);
            iVar3 = lib::L2CValue::as_integer(aLStack64);
            app::lua_bind::ArticleModule__remove_exist_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,0);
            this = aLStack64;
          }
          lib::L2CValue::~L2CValue(this);
        }
      }
    }
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

