
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SpecialNEatTurnAir_exit(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  app::lua_bind::ShakeModule__disable_offset_impl(this->moduleAccessor);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack96,pLVar5);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_WAIT);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_WAIT_JUMP);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_WAIT_FALL);
      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_WALK);
        uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_JUMP1);
          uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_JUMP2);
            uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar6 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_FALL);
              uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              if ((uVar6 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_PASS);
                uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
                lib::L2CValue::_L2CValue(aLStack80);
                if ((uVar6 & 1) == 0) {
                  lib::L2CValue::L2CValue
                            (aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_LANDING);
                  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
                  lib::L2CValue::_L2CValue(aLStack80);
                  if ((uVar6 & 1) == 0) {
                    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_TURN)
                    ;
                    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
                    lib::L2CValue::_L2CValue(aLStack80);
                    if ((uVar6 & 1) == 0) {
                      lib::L2CValue::L2CValue
                                (aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_TURN_AIR);
                      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
                      lib::L2CValue::_L2CValue(aLStack80);
                      if ((uVar6 & 1) == 0) {
                        lib::L2CValue::L2CValue(aLStack80,0.0);
                        lib::L2CValue::L2CValue
                                  (aLStack112,_FIGHTER_INSTANCE_WORK_ID_FLOAT_CHECK_DEAD_OFFSET_X);
                        fVar7 = (float)lib::L2CValue::as_number(aLStack80);
                        iVar3 = lib::L2CValue::as_integer(aLStack112);
                        app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
                        lib::L2CValue::_L2CValue(aLStack112);
                        lib::L2CValue::_L2CValue(aLStack80);
                        lib::L2CValue::L2CValue(aLStack80,0.0);
                        lib::L2CValue::L2CValue
                                  (aLStack112,_FIGHTER_INSTANCE_WORK_ID_FLOAT_CHECK_DEAD_OFFSET_Y);
                        fVar7 = (float)lib::L2CValue::as_number(aLStack80);
                        iVar3 = lib::L2CValue::as_integer(aLStack112);
                        app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
                        lib::L2CValue::_L2CValue(aLStack112);
                        lib::L2CValue::_L2CValue(aLStack80);
                        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_SPIT)
                        ;
                        uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
                        lib::L2CValue::_L2CValue(aLStack80);
                        if ((uVar6 & 1) == 0) {
                          lib::L2CValue::L2CValue
                                    (aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_DRINK);
                          uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
                          lib::L2CValue::_L2CValue(aLStack80);
                          if ((uVar6 & 1) == 0) {
                            lib::L2CValue::_L2CValue(aLStack96);
                            lib::L2CValue::L2CValue(aLStack112,LINK_NO_CAPTURE);
                            iVar3 = lib::L2CValue::as_integer(aLStack112);
                            bVar1 = app::lua_bind::LinkModule__is_linked_impl
                                              (this->moduleAccessor,iVar3);
                            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
                            lib::L2CValue::L2CValue(aLStack80,true);
                            uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
                            lib::L2CValue::_L2CValue(aLStack80);
                            lib::L2CValue::_L2CValue(aLStack96);
                            lib::L2CValue::_L2CValue(aLStack112);
                            if ((uVar6 & 1) == 0) goto LAB_710000ba1c;
                            lib::L2CValue::L2CValue(aLStack80,LINK_NO_CAPTURE);
                            iVar3 = lib::L2CValue::as_integer(aLStack80);
                            uVar4 = app::lua_bind::LinkModule__get_node_object_id_impl
                                              (this->moduleAccessor,iVar3);
                            lib::L2CValue::L2CValue(aLStack96,uVar4);
                            lib::L2CValue::_L2CValue(aLStack80);
                            pLVar5 = (L2CValue *)
                                     lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
                            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_DEAD);
                            uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
                            lib::L2CValue::_L2CValue(aLStack80);
                            if ((uVar6 & 1) == 0) {
                              uVar4 = lib::L2CValue::as_integer(aLStack96);
                              uVar4 = app::sv_battle_object::category(uVar4);
                              lib::L2CValue::L2CValue(aLStack112,uVar4 & 0xff);
                              lib::L2CValue::L2CValue(aLStack80,_BATTLE_OBJECT_CATEGORY_ENEMY);
                              uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
                              lib::L2CValue::_L2CValue(aLStack80);
                              lib::L2CValue::_L2CValue(aLStack112);
                              if ((uVar6 & 1) != 0) goto LAB_710000b980;
                              lib::L2CValue::L2CValue(aLStack80,false);
                              lib::L2CValue::L2CValue(aLStack112,true);
                              bVar1 = lib::L2CValue::as_bool(aLStack80);
                              bVar2 = lib::L2CValue::as_bool(aLStack112);
                              app::lua_bind::CatchModule__catch_cut_impl
                                        (this->moduleAccessor,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
                            }
                            else {
LAB_710000b980:
                              lib::L2CValue::L2CValue(aLStack80,false);
                              lib::L2CValue::L2CValue(aLStack112,false);
                              bVar1 = lib::L2CValue::as_bool(aLStack80);
                              bVar2 = lib::L2CValue::as_bool(aLStack112);
                              app::lua_bind::CatchModule__catch_cut_impl
                                        (this->moduleAccessor,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
                            }
                            lib::L2CValue::_L2CValue(aLStack112);
                            lib::L2CValue::_L2CValue(aLStack80);
                            lib::L2CValue::_L2CValue(aLStack96);
LAB_710000ba1c:
                            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
                            return;
                          }
                        }
                        app::LinkEventStarShot::new_l2c_table();
                        pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x105a79305b);
                        lib::L2CValue::L2CValue(aLStack80,0x14f94e9ad6);
                        lib::L2CValue::operator_(pLVar5,aLStack80);
                        lib::L2CValue::_L2CValue(aLStack80);
                        lib::L2CValue::L2CValue(aLStack128,LINK_NO_CAPTURE);
                        FUN_7100010a00(aLStack80,this,aLStack128,aLStack112);
                        lib::L2CValue::operator_(aLStack112,aLStack80);
                        lib::L2CValue::_L2CValue(aLStack80);
                        lib::L2CValue::_L2CValue(aLStack128);
                        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
                        lib::L2CValue::_L2CValue(aLStack112);
                        goto LAB_710000b6b4;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710000b6b4:
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

